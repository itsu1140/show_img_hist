import unittest
from list import makeList

class TestList(unittest.TestCase):

    def test_list1(self):
        val = makeList(4)
        self.assertEqual([4, 5, 6], val)

    def test_list2(self):
        val = makeList(-1)
        self.assertEqual([-1, 0, 1], val)

    def test_list3(self):
        val = makeList(3.5)
        self.assertEqual([3.5, 4.5, 5.5], val)

if __name__ == '__main__':
    unittest.main()