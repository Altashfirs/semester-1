-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Nov 21, 2023 at 02:17 PM
-- Server version: 10.4.28-MariaDB
-- PHP Version: 8.0.28

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `responsi`
--

-- --------------------------------------------------------

--
-- Table structure for table `customer`
--

CREATE TABLE `customer` (
  `Id` int(11) NOT NULL,
  `Name` varchar(50) DEFAULT NULL,
  `Company` varchar(50) DEFAULT NULL,
  `Address` text DEFAULT NULL,
  `City` varchar(30) DEFAULT NULL,
  `State` varchar(30) DEFAULT NULL,
  `Zipcode` varchar(15) DEFAULT NULL,
  `Phone` varchar(15) DEFAULT NULL,
  `Created_at` datetime DEFAULT current_timestamp(),
  `Updated_at` datetime DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `customer`
--

INSERT INTO `customer` (`Id`, `Name`, `Company`, `Address`, `City`, `State`, `Zipcode`, `Phone`, `Created_at`, `Updated_at`) VALUES
(1, 'Zulfikar Adnan', 'Dzerp', 'Banyuraden, Kec. Gamping, Kabupaten Sleman, Daerah Istimewa Yogyakarta', 'Yogyakaarta', 'Indinesia', '55293', '+6285328109560', '2023-11-19 04:50:22', '2023-11-19 04:50:22'),
(2, 'Udin Alaudin', 'Giava', 'kampung ciherang rt/rw 002/004, Karangbahagia, Kec. Karangbahagia, Bekasi, Jawa \r\nBarat', 'Cikarang', 'Indinesia', '17530', '+6285328123560', '2023-11-19 04:50:22', '2023-11-19 04:50:22'),
(3, 'Bidianto Adit', 'Yapen', 'Jl. Pangeran Diponegoro No.14, Kotabaru, Kec. Serang, Kota Serang, Banten', 'Serang', 'Indinesia', '42112', '+6285328131561', '2023-11-19 04:52:46', '2023-11-19 04:52:46'),
(4, 'Brillian Daniel', 'Driji', 'Jl. Ambengan No.51, Ketabang, Kec. Genteng, Kota SBY, Jawa Timur', 'Surabaya', 'Indinesia', '60272', '78612', '2023-11-19 04:52:46', '2023-11-19 04:52:46'),
(5, 'Shifa Indah Febriyana', 'Injedo', 'TDC, Jl. Lintas Melawi Komplek Golden Square belakang Gedung, Ladang, Kec. \r\nSintang, Kabupaten Sintang, Kalimantan Barat', 'Sintang', 'Indinesia', '78612', '+6285366511561', '2023-11-19 04:53:50', '2023-11-19 04:53:50');

-- --------------------------------------------------------

--
-- Table structure for table `manufact`
--

CREATE TABLE `manufact` (
  `Id` int(11) NOT NULL,
  `Name` varchar(50) DEFAULT NULL,
  `Contact` varchar(15) DEFAULT NULL,
  `Created_at` datetime DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `manufact`
--

INSERT INTO `manufact` (`Id`, `Name`, `Contact`, `Created_at`) VALUES
(1, 'clothly', '+6289692425826', '2023-11-19 04:45:53'),
(2, 'Prenda', '+62896927725867', '2023-11-19 04:45:53'),
(3, 'Calzas', '+62896118926869', '2023-11-19 04:46:58'),
(4, 'Gamici', '+62811234981', '2023-11-19 04:46:58'),
(5, 'Zowear', '+6281313418626', '2023-11-19 04:47:25');

-- --------------------------------------------------------

--
-- Table structure for table `orders`
--

CREATE TABLE `orders` (
  `Id` int(11) NOT NULL,
  `Customer_id` int(11) DEFAULT NULL,
  `Status_id` int(11) DEFAULT NULL,
  `Paid_date` datetime DEFAULT NULL,
  `Ship_instruction` text DEFAULT NULL,
  `Created_at` datetime DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `orders`
--

INSERT INTO `orders` (`Id`, `Customer_id`, `Status_id`, `Paid_date`, `Ship_instruction`, `Created_at`) VALUES
(1, 2, 2, '2023-11-19 04:56:25', 'please treat this order like you are carrying a baby', '2023-11-19 04:57:51'),
(2, 5, 3, '2023-11-19 04:58:35', '-', '2023-11-19 04:59:46'),
(3, 3, 1, '2023-11-19 04:58:35', 'Please take it fast', '2023-11-19 04:59:46'),
(4, 1, 4, '2023-11-19 04:59:27', 'Please cancel this order, I don\'t have enough money', '2023-11-19 04:59:46');

-- --------------------------------------------------------

--
-- Table structure for table `order_items`
--

CREATE TABLE `order_items` (
  `Id` int(11) NOT NULL,
  `Product_id` int(11) DEFAULT NULL,
  `Order_id` int(11) DEFAULT NULL,
  `Quantity` int(11) DEFAULT NULL,
  `Created_at` datetime DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `order_items`
--

INSERT INTO `order_items` (`Id`, `Product_id`, `Order_id`, `Quantity`, `Created_at`) VALUES
(1, 1, 1, 1, '2023-11-19 05:05:59'),
(2, 4, 1, 10, '2023-11-19 05:05:59'),
(3, 2, 2, 1, '2023-11-19 05:15:12'),
(4, 4, 2, 10, '2023-11-19 05:15:12'),
(5, 9, 3, 100, '2023-11-19 05:16:36'),
(6, 6, 3, 30, '2023-11-19 05:16:36'),
(7, 8, 4, 200, '2023-11-19 05:16:36'),
(8, 2, 4, 1, '2023-11-19 05:16:36');

-- --------------------------------------------------------

--
-- Table structure for table `order_status`
--

CREATE TABLE `order_status` (
  `Id` int(11) NOT NULL,
  `Name` varchar(30) DEFAULT NULL,
  `Description` text DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `order_status`
--

INSERT INTO `order_status` (`Id`, `Name`, `Description`) VALUES
(1, 'Waiting', 'Waiting for confirmation'),
(2, 'In Progress', 'Order has been received and is being prepared for delivery'),
(3, 'Success', 'The order has been successfully completed and received without any complaints'),
(4, 'Canceled', 'Order cancelled');

-- --------------------------------------------------------

--
-- Table structure for table `products`
--

CREATE TABLE `products` (
  `Id` int(11) NOT NULL,
  `Manufact_id` int(11) DEFAULT NULL,
  `Name` varchar(50) DEFAULT NULL,
  `Price` double DEFAULT NULL,
  `Stock` int(11) DEFAULT NULL,
  `Created_at` datetime DEFAULT NULL,
  `Updated_at` datetime DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `products`
--

INSERT INTO `products` (`Id`, `Manufact_id`, `Name`, `Price`, `Stock`, `Created_at`, `Updated_at`) VALUES
(1, 5, 'Stone Island Yarn Sweater', 45000000, 3, '2023-11-19 04:27:12', '2023-11-19 04:27:12'),
(2, 5, 'Black Crystal Trucker Jacket', 139000000, 10, '2023-11-19 04:27:12', '2023-11-19 04:27:12'),
(4, 5, 'Python Tennis Trainers', 3900000, 1000, '2023-11-19 04:30:30', '2023-11-19 04:30:30'),
(5, 4, 'Sage Bucket Hat', 100000, 1000, '2023-11-19 04:30:30', '2023-11-19 04:30:30'),
(6, 4, 'Magic Spell Miu', 1000000, 300, '2023-11-19 04:34:40', '2023-11-19 04:34:40'),
(7, 1, 'Rubber Arrow Hoodie', 1200000, 310, '2023-11-19 04:34:40', '2023-11-19 04:34:40'),
(8, 1, 'Black degrade T-ShIRT', 2500000, 560, '2023-11-19 04:37:37', '2023-11-19 04:37:37'),
(9, 3, 'Monogram Windbreaker', 1600000, 250, '2023-11-19 04:37:37', '2023-11-19 04:37:37');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `customer`
--
ALTER TABLE `customer`
  ADD PRIMARY KEY (`Id`);

--
-- Indexes for table `manufact`
--
ALTER TABLE `manufact`
  ADD PRIMARY KEY (`Id`);

--
-- Indexes for table `orders`
--
ALTER TABLE `orders`
  ADD PRIMARY KEY (`Id`),
  ADD KEY `fk_Customer_id` (`Customer_id`),
  ADD KEY `fk_Status_id` (`Status_id`);

--
-- Indexes for table `order_items`
--
ALTER TABLE `order_items`
  ADD PRIMARY KEY (`Id`),
  ADD KEY `fk_Product_id` (`Product_id`),
  ADD KEY `fk_Order_id` (`Order_id`);

--
-- Indexes for table `order_status`
--
ALTER TABLE `order_status`
  ADD PRIMARY KEY (`Id`);

--
-- Indexes for table `products`
--
ALTER TABLE `products`
  ADD PRIMARY KEY (`Id`),
  ADD KEY `fk_Manufact_id` (`Manufact_id`);

--
-- Constraints for dumped tables
--

--
-- Constraints for table `orders`
--
ALTER TABLE `orders`
  ADD CONSTRAINT `fk_Customer_id` FOREIGN KEY (`Customer_id`) REFERENCES `customer` (`Id`),
  ADD CONSTRAINT `fk_Status_id` FOREIGN KEY (`Status_id`) REFERENCES `order_status` (`Id`);

--
-- Constraints for table `order_items`
--
ALTER TABLE `order_items`
  ADD CONSTRAINT `fk_Order_id` FOREIGN KEY (`Order_id`) REFERENCES `orders` (`Id`),
  ADD CONSTRAINT `fk_Product_id` FOREIGN KEY (`Product_id`) REFERENCES `products` (`Id`);

--
-- Constraints for table `products`
--
ALTER TABLE `products`
  ADD CONSTRAINT `fk_Manufact_id` FOREIGN KEY (`Manufact_id`) REFERENCES `manufact` (`Id`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
