#
# This test validates the behavior of the FOG parser.
#
# Note that this test driver assumes that the pyutilib.th package is installed.
# Also, it assumes that cxxtest is a peer directory.
#

import string
import os
from os.path import dirname, abspath, abspath, basename
import sys
import cxxtest.cxx_parser
import pyutilib.th as unittest
import pyutilib.misc

currdir = dirname(abspath(__file__))+os.sep

# Declare an empty TestCase class
class Test(unittest.TestCase): pass

@unittest.nottest
def fog_test(self, name):
    root = currdir + self.get_options(name)['root']
    filename = self.get_options(name)['filename']
    print "HERE", root+'.out'
    pyutilib.misc.setup_redirect(root+'.out')
    #cxxtest.cxx_parser.parse_cpp(filename=filename, verbose=2, debug=2)
    cxxtest.cxx_parser.parse_cpp(filename=filename, verbose=2)
    pyutilib.misc.reset_redirect()
    self.assertFileEqualsBaseline(root+'.out', root+'.txt')

# Find files, and use them to define baseline tests
for file in pyutilib.misc.find_files(currdir, '*.c', '*.cc', '*.i', '*.cpp', '*.h'):
    absfile = abspath(file)[len(currdir):]
    name=absfile.split('.')[:-1]
    if len(name) == 1:
        name=name[0]
    else:
        name='.'.join(name)
    root = name
    name = string.replace(name,os.sep,'_')
    name = string.replace(name,'.','_')
    name = string.replace(name,'-','_')
    ##if not os.path.exists(root+name+'.txt'):
        ##sys.stderr.write("WARNING:  no baseline available for file %s\n" % file)
    Test.add_fn_test(fn=fog_test, name=name, options={'root':root, 'filename':file})

# Execute the tests
if __name__ == '__main__':
    unittest.main()

