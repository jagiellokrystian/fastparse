from fastparse import read_csv

def test_read_csv():
    with open("test.csv", "w") as f:
        f.write("id,name\\n1,Alice\\n2,Bob\n")
    rows = read_csv("test.csv")
    assert rows == [["id", "name"], ["1", "Alice"], ["2", "Bob"]]
