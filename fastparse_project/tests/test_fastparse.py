from fastparse import read_csv

def test_read_csv():
    result = read_csv("dummy.csv")
    assert "Parsed CSV" in result
