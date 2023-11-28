<?php

// Check if the form was submitted
if (isset($_POST['user_photo'])) {

// Get the user's photo
$userPhoto = $_FILES['user_photo'];

// Check if the photo is a valid image file
if ($userPhoto['type'] != 'image/png' && $userPhoto['type'] != 'image/jpg') {

// The photo is not a valid image file
echo "The photo is not a valid image file.";

// Exit the script
exit;

}

// Save the user's photo to the server
move_uploaded_file($userPhoto['tmp_name'], "photos/" . $userPhoto['name']);

// Get the twibbon design file
$twibbonDesign = file_get_contents("twibbon.png");

// Replace the placeholder image with the user's photo
$twibbonDesign = str_replace("PLACEHOLDER_IMAGE", $userPhoto['name'], $twibbonDesign);

// Save the twibbon design file
file_put_contents("twibbon_with_photo.png", $twibbonDesign);

// Display the twibbon with the user's photo
echo "<img src='twibbon_with_photo.png'>";

}

?>