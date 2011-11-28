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

#
# These are files that represent bugs in the parser.  We're ignoring them for now...
#
skip = ['gnu/attr02', 'gnu/asm01', 'c/t0001']

ignore = ['gnu/bugs/gb0004', 'gnu/cil/structattr', 'gnu/cil/structattr2', 'c/k0009', 'gnu/g0032', 'kandr/t0002', 'gnu/d0085', 'gnu/k0004', 'kandr/t0003', 'gnu/dC0009', 'kandr/t0001', 'kandr/t0004', 'c/t0023', 'c/t0016', 'c/k0006a', 'c/k0003a', 'c/k0003', 'c/dC0029', 'c/dC0026', 'c/dC0025', 'c/dC0017']

# Declare an empty TestCase class
class Test(unittest.TestCase): pass

@unittest.nottest
def skip_test(self, name):
    root = currdir + self.get_options(name)['root']
    filename = self.get_options(name)['filename']
    self.skipTest("C++ parser currently does not support the syntax in "+filename)

@unittest.nottest
def fog_test(self, name):
    root = currdir + self.get_options(name)['root']
    filename = self.get_options(name)['filename']
    #print "HERE", root+'.out'
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
    #
    if name in ignore:
        continue
    if name in skip:
        Test.add_fn_test(fn=skip_test, name=name, options={'root':root, 'filename':file})
        continue
    #
    name = string.replace(name,os.sep,'_')
    name = string.replace(name,'.','_')
    name = string.replace(name,'-','_')
    ##if not os.path.exists(root+name+'.txt'):
        ##sys.stderr.write("WARNING:  no baseline available for file %s\n" % file)
    Test.add_fn_test(fn=fog_test, name=name, options={'root':root, 'filename':file})

# Execute the tests
if __name__ == '__main__':
    unittest.main()

