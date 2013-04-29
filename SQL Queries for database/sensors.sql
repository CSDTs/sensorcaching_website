-- phpMyAdmin SQL Dump
-- version 3.5.5
-- http://www.phpmyadmin.net
--
-- Host: localhost
-- Generation Time: Apr 22, 2013 at 08:25 PM
-- Server version: 5.1.68-cll
-- PHP Version: 5.3.17

SET SQL_MODE="NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `csensordata.sensors`
--

-- --------------------------------------------------------

--
-- Table structure for table `sensors`
--

CREATE TABLE IF NOT EXISTS `sensors` (
  `sensor_id` INT(10) NOT NULL AUTO_INCREMENT,
  `owner_id` INT(10) NOT NULL,
  `sensor_name` varchar(40) NOT NULL,
  `latitude` float(9,6) NOT NULL,
  `longitude` float(9,6) NOT NULL,
  `type` varchar(32) NOT NULL,
  PRIMARY KEY (`sensor_id`),
  CONSTRAINT FOREIGN KEY (`owner_id`) REFERENCES csensors.users (`uid`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

ALTER TABLE `sensors` ADD CONSTRAINT FK_owner_id_refs FOREIGN KEY (`owner_id`) REFERENCES `csensors.users` (`uid`);
