import unittest
import subprocess
from one.one import one


executable_c = './one/one'
executable_cpp = './one/one_cpp'


class TestOne(unittest.TestCase):

    def test_limit_10(self):
        result = subprocess.run([executable_c, '10'], stdout=subprocess.PIPE)
        self.assertEqual(result.stdout, b'23\n')

    def test_limit_1000(self):
        result = subprocess.run([executable_c, '1000'], stdout=subprocess.PIPE)
        self.assertEqual(result.stdout, b'233168\n')

    def test_cpp_limit_10(self):
        result = subprocess.run([executable_cpp, '10'], stdout=subprocess.PIPE)
        self.assertEqual(result.stdout, b'23\n')

    def test_cpp_limit_1000(self):
        result = subprocess.run(
            [executable_cpp, '1000'],
            stdout=subprocess.PIPE)
        self.assertEqual(result.stdout, b'233168\n')

    def test_py_limit_10(self):
        self.assertEqual(one(10), 23)

    def test_py_limit_1000(self):
        self.assertEqual(one(1000), 233168)
