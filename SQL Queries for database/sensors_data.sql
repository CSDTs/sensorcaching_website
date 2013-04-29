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
-- Database: `csensordata.sensors_data`
--

-- --------------------------------------------------------

--
-- Table structure for table `sensors_data`
--

CREATE TABLE IF NOT EXISTS `sensors_data` (
  `data_id` INT(10) NOT NULL AUTO_INCREMENT,
  `sensor_id` INT(10) NOT NULL,
  `value` float(5,2) NOT NULL,
  `date_time` datetime NOT NULL,
  PRIMARY KEY (`data_id`),
  CONSTRAINT FOREIGN KEY (`sensor_id`) REFERENCES sensors (`sensor_id`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;


ALTER TABLE `sensors_data` ADD CONSTRAINT FK_sensor_id_refs FOREIGN KEY (`sensor_id`) REFERENCES `sensors` (`sensor_id`);
