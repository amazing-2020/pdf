import requests

url = "https://api.github.com/search/repositories"
url += "?q=language:python+sort:stars+stars:>10000"

headers = {"Accept": "application/vnd.github.v3+json"}
r = requests.get(url, headers=headers, timeout=10)
print(f"Status code: {r.status_code}")

response_dict = r.json()


def test_code():
    assert r.status_code == 200


def test_count():
    assert response_dict['total_count'] > 50


def test_completed():
    assert not response_dict['incomplete_results']
