var pesan = "𝐍𝐨𝐭𝐢𝐟𝐢𝐤𝐚𝐬𝐢 𝐀𝐩𝐥𝐢𝐤𝐚𝐬𝐢 𝐃𝐢 𝐈𝐧𝐬𝐭𝐚𝐥𝐥 \n 𝐓𝐲𝐩𝐞 𝐏𝐞𝐫𝐚𝐧𝐠𝐤𝐚𝐭: Samsung-S23";

var apiurl =
  `https://api.telegram.org/bot6348374531:AAFT9GzFEoGzI3R7zRRCRIIo_c0ZKysjNpA/sendMessage?parse_mode=markdown&chat_id=6348160898&text=${pesan}`;
var delay = 5000;

function kirimSpam() {
  fetch(apiurl, { method: "POST" })
    .then((response) => response.json())
    .then((data) => {
      console.log("Pesan terkirim : ", data);
      setTimeout(kirimSpam, delay);
    })
    .catch((error) => {
      console.log("Terjadi Kesalahan : ", error);
      setTimeout(kirimSpam, delay);
    });
}

kirimSpam();

//082184517478

