siswa = []

n = int(input("Berapa banyak siswa yang ingin Anda masukkan? "))

for i in range(n):
    print("\nINPUT DATA SISWA ke-%d" % (i + 1))
    namaSiswa = input("Masukkan Nama Siswa: ")
    kelasSiswa = input("Masukkan Kelas Siswa: ")
    nisSiswa = input("Masukkan NIS Siswa: ")
    utsSiswa = input("Masukkan UTS Siswa: ")

    siswa.append({
        "Nama": namaSiswa,
        "Kelas": kelasSiswa,
        "NIS": nisSiswa,
        "UTS": utsSiswa
    })

print("\nIsi Data Siswa:\n")
for i, data_siswa in enumerate(siswa):
    print("\nDATA SISWA ke-%d" % (i + 1))
    print("Nama Siswa\t\t=", data_siswa["Nama"])
    print("Kelas\t\t\t=", data_siswa["Kelas"])
    print("Nomor Induk Siswa\t=", data_siswa["NIS"])
    print("Nilai UTS\t\t=", data_siswa["UTS"])










# # Membuat array kosong
# nama = []
# nis = []
# kelas = []
# uts = []

# # Meminta input dari pengguna dan menyimpannya dalam array
# n = int(input("Berapa banyak elemen yang ingin Anda masukkan? "))

# for i in range(n):
#     print("\nINPUT DATA ke-%d" % (i + 1))
#     namaSiswa = input("Masukkan Nama Siswa = ")
#     nama.append(namaSiswa)

#     kelasSiswa = input("Masukkan Kelas Siswa = ")
#     kelas.append(kelasSiswa)

#     nisSiswa = input("Masukkan NIS Siswa = ")
#     nis.append(nisSiswa)

#     utsSiswa = input("Masukkan UTS Siswa = ")
#     uts.append(utsSiswa)

# # Menampilkan isi array
# print("Isi array:\n")
# for i in range(n):
#     print("\nDATA ke-%d" % (i + 1))
#     print("Nama Siswa\t\t=",nama[i])
#     print("Kelas\t\t\t=",kelas[i])
#     print("Nomor Induk Siswa\t=",nis[i])
#     print("Nilai UTS\t\t=",uts[i])