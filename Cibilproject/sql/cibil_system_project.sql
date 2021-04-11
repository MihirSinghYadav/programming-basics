-- phpMyAdmin SQL Dump
-- version 4.6.4
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Aug 07, 2019 at 07:38 AM
-- Server version: 5.7.14
-- PHP Version: 5.6.25

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `cibil_system_project`
--

-- --------------------------------------------------------

--
-- Table structure for table `cibil_system_admin`
--

CREATE TABLE `cibil_system_admin` (
  `id` int(10) NOT NULL,
  `name` varchar(100) NOT NULL,
  `email` varchar(100) NOT NULL,
  `login_id` int(10) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `cibil_system_admin`
--

INSERT INTO `cibil_system_admin` (`id`, `name`, `email`, `login_id`) VALUES
(1, 'Nazim Chougule', 'nazim@gmail.com', 1),
(2, 'Ravi Sundar', 'ravi@gmail.com', 14),
(3, 'Avinash Chaudhari', 'avinash@gmail.com', 19),
(4, 'Mahesh Jadhav', 'mahesh@gmail.com', 20);

-- --------------------------------------------------------

--
-- Table structure for table `cibil_system_approval`
--

CREATE TABLE `cibil_system_approval` (
  `id` int(10) NOT NULL,
  `user_id` int(10) NOT NULL,
  `status` varchar(100) NOT NULL,
  `approved_by` varchar(100) NOT NULL,
  `approval_date` datetime NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `cibil_system_approval`
--

INSERT INTO `cibil_system_approval` (`id`, `user_id`, `status`, `approved_by`, `approval_date`) VALUES
(1, 7, 'Pending', 'Mahesh Jadhav', '2019-07-12 02:00:55'),
(2, 7, 'Pending', 'Nazim Chougule', '2019-07-11 02:00:55'),
(3, 7, 'Rejected', 'Avinash Chaudhari', '2019-07-10 02:00:55'),
(4, 8, 'Approved', 'Nazim Chougule', '2019-07-10 02:00:55'),
(5, 5, 'Approved', 'Avinash Chaudhari', '2019-07-12 02:36:41'),
(6, 9, 'Pending', 'Nazim Chougule', '2019-07-12 02:41:03'),
(7, 9, 'Rejected', 'Nazim Chougule', '2019-07-12 03:18:43');

-- --------------------------------------------------------

--
-- Table structure for table `cibil_system_bankname`
--

CREATE TABLE `cibil_system_bankname` (
  `id` int(10) NOT NULL,
  `bank_name` varchar(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `cibil_system_bankname`
--

INSERT INTO `cibil_system_bankname` (`id`, `bank_name`) VALUES
(1, 'State Bank Of India'),
(2, 'Axis Bank'),
(3, 'ICICI Bank');

-- --------------------------------------------------------

--
-- Table structure for table `cibil_system_corporate`
--

CREATE TABLE `cibil_system_corporate` (
  `id` int(10) NOT NULL,
  `name` varchar(100) NOT NULL,
  `email` varchar(100) NOT NULL,
  `contact` int(100) NOT NULL,
  `login_id` int(10) NOT NULL,
  `bank_id` int(10) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `cibil_system_corporate`
--

INSERT INTO `cibil_system_corporate` (`id`, `name`, `email`, `contact`, `login_id`, `bank_id`) VALUES
(1, 'Mohnish Vaishnav', 'mohnish@gmail.com', 123456789, 8, 2),
(2, 'Bhavna Patidar', 'bhavna@gmail.com', 1234567890, 9, 1),
(3, 'John Dsouza', 'john@gmail.com', 1234567890, 15, 3);

-- --------------------------------------------------------

--
-- Table structure for table `cibil_system_improvement`
--

CREATE TABLE `cibil_system_improvement` (
  `id` int(10) NOT NULL,
  `user_id` int(10) NOT NULL,
  `improvement` varchar(100) NOT NULL,
  `status` varchar(100) NOT NULL,
  `approved_by` varchar(100) NOT NULL,
  `approved_date` datetime NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `cibil_system_improvement`
--

INSERT INTO `cibil_system_improvement` (`id`, `user_id`, `improvement`, `status`, `approved_by`, `approved_date`) VALUES
(1, 1, 'NA', 'NA', 'NA', '2019-07-03 03:00:47'),
(2, 2, 'NA', 'NA', 'NA', '2019-07-05 09:25:59'),
(3, 3, 'NA', 'NA', 'NA', '2019-07-05 09:34:32'),
(4, 4, 'NA', 'NA', 'NA', '2019-07-05 09:38:02'),
(5, 5, 'I have paid all my EMI', 'Approved', 'Avinash Chaudhari', '2019-07-12 02:36:41'),
(6, 6, 'NA', 'NA', 'NA', '2019-07-07 08:50:54'),
(7, 7, 'My previous cheque had some issue with bank. Kindly Check.', 'Rejected', 'Avinash Chaudhari', '2019-07-12 02:30:29'),
(8, 8, 'I have paid all my pending credit card bills. Please verify', 'Approved', 'Nazim Chougule', '2019-07-12 01:35:59'),
(9, 9, 'Previous Check has cleared ', 'Rejected', 'Nazim Chougule', '2019-07-12 03:18:43'),
(10, 10, 'NA', 'NA', 'NA', '2019-07-10 08:41:55'),
(11, 11, 'NA', 'NA', 'NA', '2019-07-11 03:23:56'),
(12, 12, 'NA', 'NA', 'NA', '2019-07-11 03:30:50'),
(13, 13, 'NA', 'NA', 'NA', '2019-07-11 03:36:26'),
(14, 14, 'NA', 'NA', 'NA', '2019-07-25 12:02:17'),
(15, 15, 'NA', 'NA', 'NA', '2019-07-25 12:06:03'),
(16, 16, 'NA', 'NA', 'NA', '2019-07-25 12:07:07'),
(17, 17, 'NA', 'NA', 'NA', '2019-07-25 12:07:51'),
(18, 18, 'NA', 'NA', 'NA', '2019-07-25 12:10:05'),
(19, 19, 'NA', 'NA', 'NA', '2019-07-25 12:11:42'),
(20, 20, 'NA', 'NA', 'NA', '2019-07-25 12:50:27'),
(21, 21, 'NA', 'NA', 'NA', '2019-07-25 01:05:35');

-- --------------------------------------------------------

--
-- Table structure for table `cibil_system_login`
--

CREATE TABLE `cibil_system_login` (
  `id` int(10) NOT NULL,
  `username` varchar(100) NOT NULL,
  `password` varchar(100) NOT NULL,
  `role` varchar(100) NOT NULL,
  `register_date` datetime NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Dumping data for table `cibil_system_login`
--

INSERT INTO `cibil_system_login` (`id`, `username`, `password`, `role`, `register_date`) VALUES
(1, 'admin', 'admin', 'admin', '2019-07-03 02:59:59'),
(2, 'pranali', 'pranali', 'user', '2019-07-03 03:00:47'),
(3, 'ravi', 'ravi', 'user', '2019-07-05 09:25:59'),
(4, 'lizanne', 'lizanne', 'user', '2019-07-05 09:34:32'),
(5, 'arjun', 'arjun', 'user', '2019-07-05 09:38:02'),
(6, 'nilima', 'nilima', 'user', '2019-07-05 02:41:44'),
(7, 'mehul', 'mehul', 'user', '2019-07-07 08:50:54'),
(8, 'mohnish', 'mohnish', 'corporate', '2019-07-07 02:44:15'),
(9, 'corporate', 'corporate', 'corporate', '2019-07-07 02:47:28'),
(10, 'varsha', 'varsha', 'user', '2019-07-08 01:09:01'),
(11, 'shani', 'shani', 'user', '2019-07-08 01:23:25'),
(12, 'user', 'user', 'user', '2019-07-08 01:38:45'),
(13, 'dipali', 'dipali', 'user', '2019-07-10 08:41:55'),
(14, 'sundar', 'sundar', 'sub-admin', '2019-07-10 11:28:51'),
(15, 'john', 'john', 'corporate', '2019-07-11 01:16:44'),
(16, 'vinayak', 'vinayak', 'user', '2019-07-11 03:23:56'),
(17, 'calwin', 'calwin', 'user', '2019-07-11 03:30:50'),
(18, 'mehmood', 'mehmood', 'user', '2019-07-11 03:36:26'),
(19, 'avinash', 'avinash', 'sub-admin', '2019-07-12 01:01:01'),
(20, 'mahesh', 'mahesh', 'sub-admin', '2019-07-12 01:04:44'),
(21, 'diksha', 'diksha', 'user', '2019-07-25 12:02:17'),
(22, 'felix', 'felix', 'user', '2019-07-25 12:06:03'),
(23, 'shanti', 'shanti', 'user', '2019-07-25 12:07:07'),
(24, 'daron', 'daron', 'user', '2019-07-25 12:07:51'),
(25, 'jessica', 'jessica', 'user', '2019-07-25 12:10:05'),
(26, 'rachel', 'rachel', 'user', '2019-07-25 12:11:42'),
(27, 'donald', 'donald', 'user', '2019-07-25 12:50:27'),
(28, 'lalit', 'lalit', 'user', '2019-07-25 01:05:35');

-- --------------------------------------------------------

--
-- Table structure for table `cibil_system_user`
--

CREATE TABLE `cibil_system_user` (
  `id` int(10) NOT NULL,
  `name` varchar(100) NOT NULL,
  `email` varchar(100) NOT NULL,
  `gender` varchar(100) NOT NULL,
  `login_id` int(100) NOT NULL,
  `bank_id` int(10) NOT NULL,
  `score_id` int(10) NOT NULL,
  `contact` int(200) NOT NULL,
  `city` varchar(100) NOT NULL,
  `address` varchar(255) NOT NULL,
  `register_date` datetime NOT NULL,
  `update_date` datetime NOT NULL,
  `addbyid` varchar(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Dumping data for table `cibil_system_user`
--

INSERT INTO `cibil_system_user` (`id`, `name`, `email`, `gender`, `login_id`, `bank_id`, `score_id`, `contact`, `city`, `address`, `register_date`, `update_date`, `addbyid`) VALUES
(1, 'Pranali Kadam', 'pranali@gmail.com', 'Female', 2, 2, 1, 123456789, 'Mumbai', 'Virar (E), Mumbai', '2019-07-03 03:00:47', '2019-07-08 08:56:11', 'user'),
(2, 'Ravi Kumar', 'ravi@gmail.com', 'Male', 3, 3, 2, 123456789, 'Mumbai', 'Bhandup', '2019-07-05 09:25:59', '2019-07-05 09:25:59', 'user'),
(3, 'Lizanne Rodrigues', 'lizanne@gmail.com', 'Female', 4, 1, 3, 123456789, 'Mumbai', 'Vasai', '2019-07-05 09:34:32', '2019-07-14 08:47:07', 'user'),
(4, 'Arjun Yadav', 'arjun@gmail.com', 'Male', 5, 2, 4, 123456789, 'Mumbai', '  Borivali  ', '2019-07-05 09:38:02', '2019-07-07 01:55:26', 'user'),
(5, 'Nilima Jadhav', 'nilima@gmail.com', 'Female', 6, 1, 5, 123456789, 'Mumbai', 'Kandivali', '2019-07-05 02:41:44', '2019-07-12 10:50:38', 'user'),
(6, 'Mehul Prajapati', 'mehul@gmail.com', 'Male', 7, 3, 6, 123456789, 'Mumbai', 'Borivali, Mumbai', '2019-07-07 08:50:54', '2019-07-07 08:50:54', 'user'),
(7, 'Varsha Waghela', 'varsha@gmail.com', 'Female', 10, 2, 7, 123456789, 'Mumbai', 'Malad, Mumbai', '2019-07-08 01:09:01', '2019-07-08 03:24:02', 'corporate'),
(8, 'Shani Chaturvedi', 'shani@gmail.com', 'Male', 11, 2, 8, 123456789, 'Mumbai', 'Mira Road, Mumbai', '2019-07-08 01:23:25', '2019-07-08 01:23:25', 'corporate'),
(9, 'Hiral', 'hiral@gmail.com', 'Female', 12, 1, 9, 2147483647, 'Mumbai', ' Andheri, Mumbai ', '2019-07-08 01:38:45', '2019-07-14 08:27:58', 'corporate'),
(10, 'Dipali Shah', 'dipali@gmail.com', 'Female', 13, 1, 10, 123456789, 'Mumbai', 'Bandra, Mumbai', '2019-07-10 08:41:55', '2019-07-10 08:41:55', 'corporate'),
(11, 'Vinayak Kothari', 'vinayak@gmail.com', 'Male', 16, 1, 11, 987654321, 'Navi Mumbai', 'Mansarovar, Navi Mumbai', '2019-07-11 03:23:56', '2019-07-11 03:23:56', 'admin'),
(12, 'Calwin Jospeh', 'calwin@gmail.com', 'Male', 17, 1, 12, 123456789, 'Pune', 'Pune City', '2019-07-11 03:30:50', '2019-07-11 03:30:50', 'admin'),
(13, 'Mehmood Khan', 'mehmood@gmail.com', 'Male', 18, 3, 13, 1234567890, 'Bangalore', 'Hi-Tech City', '2019-07-11 03:36:26', '2019-07-11 03:36:26', 'admin'),
(14, 'Diksha', 'diksha@gmail.com', 'Male', 21, 1, 14, 2147483647, 'Mumbai', 'Dadar West', '2019-07-25 12:02:17', '2019-07-25 12:02:17', 'corporate'),
(15, 'Felix', 'felix@gmail.com', 'Male', 22, 1, 15, 2147483647, 'Mumbai', 'Dombivali', '2019-07-25 12:06:03', '2019-07-25 12:06:03', 'corporate'),
(16, 'Shanti', 'shanti@gmail.com', 'Male', 23, 1, 16, 2147483647, 'Mumbai', 'Dombivali', '2019-07-25 12:07:07', '2019-07-25 12:07:07', 'corporate'),
(17, 'Daron', 'daron@gmail.com', 'Male', 24, 1, 17, 2147483647, 'Mumbai', 'Dombivali', '2019-07-25 12:07:51', '2019-07-25 12:07:51', 'corporate'),
(18, 'Jessica', 'jessica@gmail.com', 'Male', 25, 1, 18, 2147483647, 'Mumbai', 'Dombivali', '2019-07-25 12:10:05', '2019-07-25 12:10:05', 'corporate'),
(19, 'Rachel', 'rachel@gmail.com', 'Male', 26, 1, 19, 2147483647, 'Mumbai', 'Dombivali', '2019-07-25 12:11:42', '2019-07-25 12:11:42', 'corporate'),
(20, 'Donald', 'donald@gmail.com', 'Male', 27, 2, 20, 987654321, 'Mumbai', 'Dadar', '2019-07-25 12:50:27', '2019-07-25 12:50:27', 'admin'),
(21, 'Lalit', 'lalit@gmail.com', 'Male', 28, 2, 21, 1234567890, 'Mumbai', 'Malad', '2019-07-25 01:05:35', '2019-07-25 01:05:35', 'admin');

-- --------------------------------------------------------

--
-- Table structure for table `cibil_system_userscore`
--

CREATE TABLE `cibil_system_userscore` (
  `id` int(10) NOT NULL,
  `user_id` int(10) NOT NULL,
  `ccdues` int(10) NOT NULL,
  `ccdues_query` varchar(100) NOT NULL,
  `pending_loan` int(10) NOT NULL,
  `pendingloan_query` varchar(100) NOT NULL,
  `bounce_check` int(10) NOT NULL,
  `bouncecheck_query` varchar(100) NOT NULL,
  `scam` int(10) NOT NULL,
  `scam_query` varchar(100) NOT NULL,
  `score` int(10) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `cibil_system_userscore`
--

INSERT INTO `cibil_system_userscore` (`id`, `user_id`, `ccdues`, `ccdues_query`, `pending_loan`, `pendingloan_query`, `bounce_check`, `bouncecheck_query`, `scam`, `scam_query`, `score`) VALUES
(1, 1, 0, 'NA', 0, 'NA', 0, 'NA', 0, 'NA', 0),
(2, 2, 0, 'NA', 0, 'NA', 0, 'NA', 0, 'NA', 0),
(3, 3, 2, 'Credit card bills never paid', 0, 'NA', 0, 'NA', 0, 'NA', 2),
(4, 4, 0, 'NA', 0, 'NA', 0, 'NA', 0, 'NA', 0),
(5, 5, 0, 'NA', 0, 'NA', 0, 'NA', 0, 'NA', 0),
(6, 6, 0, 'NA', 0, 'NA', 0, 'NA', 0, 'NA', 0),
(7, 7, 2, 'Credit card bills not paid on time', 0, 'NA', 1, 'Previous cheque bounce', 0, 'NA', 3),
(8, 8, 0, 'NA', 1, 'Home Loan Pending', 0, 'NA', 0, 'NA', 1),
(9, 9, 0, 'NA', 1, 'Car Loan Pending', 1, 'Check bounce always', 0, 'NA', 2),
(10, 10, 0, 'NA', 0, 'Na', 0, 'NA', 0, 'NA', 0),
(11, 11, 0, 'NA', 0, 'NA', 0, 'NA', 0, 'NA', 0),
(12, 12, 0, 'NA', 0, 'NA', 0, 'NA', 0, 'NA', 0),
(13, 13, 0, 'NA', 0, 'NA', 0, 'NA', 0, 'NA', 0),
(14, 14, 2, 'Credit Dues Pending', 0, 'NA', 0, 'NA', 0, 'NA', 2),
(15, 15, 0, 'NA', 1, 'Loan Pending', 0, 'NA', 0, 'NA', 1),
(16, 16, 0, 'NA', 1, 'Loan Pending', 0, 'NA', 0, 'NA', 1),
(17, 17, 0, 'NA', 1, 'Loan Pending', 0, 'NA', 0, 'NA', 1),
(18, 18, 0, 'NA', 1, 'Loan Pending', 0, 'NA', 0, 'NA', 1),
(19, 19, 0, 'NA', 1, 'Loan Pending', 0, 'NA', 0, 'NA', 1),
(20, 20, 2, 'Credit card bills never paid', 0, 'NA', 0, 'NA', 0, 'NA', 2),
(21, 21, 2, 'Credit Dues Pending', 0, 'NA', 0, 'NA', 0, 'NA', 2);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `cibil_system_admin`
--
ALTER TABLE `cibil_system_admin`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `cibil_system_approval`
--
ALTER TABLE `cibil_system_approval`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `cibil_system_bankname`
--
ALTER TABLE `cibil_system_bankname`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `cibil_system_corporate`
--
ALTER TABLE `cibil_system_corporate`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `cibil_system_improvement`
--
ALTER TABLE `cibil_system_improvement`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `cibil_system_login`
--
ALTER TABLE `cibil_system_login`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `cibil_system_user`
--
ALTER TABLE `cibil_system_user`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `cibil_system_userscore`
--
ALTER TABLE `cibil_system_userscore`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `cibil_system_admin`
--
ALTER TABLE `cibil_system_admin`
  MODIFY `id` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;
--
-- AUTO_INCREMENT for table `cibil_system_approval`
--
ALTER TABLE `cibil_system_approval`
  MODIFY `id` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=8;
--
-- AUTO_INCREMENT for table `cibil_system_bankname`
--
ALTER TABLE `cibil_system_bankname`
  MODIFY `id` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;
--
-- AUTO_INCREMENT for table `cibil_system_corporate`
--
ALTER TABLE `cibil_system_corporate`
  MODIFY `id` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;
--
-- AUTO_INCREMENT for table `cibil_system_improvement`
--
ALTER TABLE `cibil_system_improvement`
  MODIFY `id` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=22;
--
-- AUTO_INCREMENT for table `cibil_system_login`
--
ALTER TABLE `cibil_system_login`
  MODIFY `id` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=29;
--
-- AUTO_INCREMENT for table `cibil_system_user`
--
ALTER TABLE `cibil_system_user`
  MODIFY `id` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=22;
--
-- AUTO_INCREMENT for table `cibil_system_userscore`
--
ALTER TABLE `cibil_system_userscore`
  MODIFY `id` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=22;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
