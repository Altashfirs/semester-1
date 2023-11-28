# Data
data = [
    ["Nama", "Usia", "Kota"],
    ["Alice", 25, "New York"],
    ["Bob", 30, "Los Angeles"],
    ["Charlie", 22, "Chicago"]
]

# Fungsi untuk mencetak baris tabel
def print_row(row):
    row_str = " | ".join(map(str, row))
    print(row_str)

# Mencetak header tabel
print_row(data[0])
print("-" * 30)  # Garis pembatas

# Mencetak data tabel
for row in data[1:]:
    print_row(row)
