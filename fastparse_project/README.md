# 🚀 FastParse

**FastParse** to superszybka biblioteka do wczytywania i parsowania plików CSV oraz JSON, napisana w C++ z Pythonowym API.

### 🔥 Główne cechy:
- 10x szybsze niż `pandas.read_csv()`
- Parsowanie wielkich plików (nawet 100+ GB)
- Obsługa błędów, uszkodzonych linii, strumieni
- Wybór kolumn i zakresów wierszy
- Eksport do `.parquet`, `.feather`, `.msgpack`

### 📦 Instalacja

```bash
pip install fastparse
```

### 🧪 Przykład użycia

```python
from fastparse import read_csv

df = read_csv("data.csv")
print(df.head())
```

### ⚙️ Budowanie ręczne (dev)

```bash
maturin develop
```

### 📃 Licencja

MIT License — możesz używać, modyfikować i zarabiać na własnych wersjach.

### 🧠 Autor

Stworzone przez [Twoje Imię] – dla tych, którzy kochają szybkość i prostotę.
