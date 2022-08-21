import unittest
from city_function import city_and_country


class CityTest(unittest.TestCase):
    def test_city(self):
        city = city_and_country('santiago', 'chile')
        self.assertEqual(city, 'Santiago Chile')

    def test_city_population(self):
        city = city_and_country('santiago', 'chile', 50000000)
        self.assertEqual(city, 'Santiago Chile - population 50000000')


if __name__ == '__main__':
    unittest.main()
