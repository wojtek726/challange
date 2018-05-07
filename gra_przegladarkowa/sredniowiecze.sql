-- phpMyAdmin SQL Dump
-- version 4.8.0
-- https://www.phpmyadmin.net/
--
-- Host: localhost
-- Czas generowania: 07 Maj 2018, 12:35
-- Wersja serwera: 10.1.31-MariaDB
-- Wersja PHP: 7.2.4

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Baza danych: `sredniowiecze`
--

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `budynki`
--

CREATE TABLE `budynki` (
  `idbudynki` int(11) NOT NULL,
  `idusera` int(11) NOT NULL,
  `ratusz` int(11) NOT NULL,
  `tartak` int(11) NOT NULL,
  `kopalnia` int(11) NOT NULL,
  `spichlerz` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

--
-- Zrzut danych tabeli `budynki`
--

INSERT INTO `budynki` (`idbudynki`, `idusera`, `ratusz`, `tartak`, `kopalnia`, `spichlerz`) VALUES
(1, 1, 1, 1, 1, 1);

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `surowce`
--

CREATE TABLE `surowce` (
  `idsurowce` int(11) NOT NULL,
  `idusera` int(11) NOT NULL,
  `drewno` int(11) NOT NULL,
  `kamien` int(11) NOT NULL,
  `zboze` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

--
-- Zrzut danych tabeli `surowce`
--

INSERT INTO `surowce` (`idsurowce`, `idusera`, `drewno`, `kamien`, `zboze`) VALUES
(1, 1, 5, 10, 15);

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `uzytkownicy`
--

CREATE TABLE `uzytkownicy` (
  `idusera` int(11) NOT NULL,
  `user` text COLLATE utf8_polish_ci NOT NULL,
  `pass` text COLLATE utf8_polish_ci NOT NULL,
  `email` text COLLATE utf8_polish_ci NOT NULL,
  `imie` text COLLATE utf8_polish_ci NOT NULL,
  `dnipremium` int(11) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

--
-- Zrzut danych tabeli `uzytkownicy`
--

INSERT INTO `uzytkownicy` (`idusera`, `user`, `pass`, `email`, `imie`, `dnipremium`) VALUES
(1, 'adam', 'qwerty', 'adam@gmail.com', 'Adam', 0),
(2, 'marek', 'asdfg', 'marek@gmail.com', 'Marek', 15),
(3, 'anna', 'zxcvb', 'anna@gmail.com', '120', 25),
(4, 'andrzej', 'asdfg', 'andrzej@gmail.com', '189', 0),
(5, 'justyna', 'yuiop', 'justyna@gmail.com', '554', 0),
(6, 'kasia', 'hjkkl', 'kasia@gmail.com', '109', 12),
(7, 'beata', 'fgthj', 'beata@gmail.com', '447', 77),
(8, 'jakub', 'ertyu', 'jakub@gmail.com', '876', 0),
(9, 'janusz', 'cvbnm', 'janusz@gmail.com', '2467', 0),
(10, 'roman', 'dfghj', 'roman@gmail.com', '245', 23);

--
-- Indeksy dla zrzutów tabel
--

--
-- Indeksy dla tabeli `budynki`
--
ALTER TABLE `budynki`
  ADD PRIMARY KEY (`idbudynki`);

--
-- Indeksy dla tabeli `surowce`
--
ALTER TABLE `surowce`
  ADD PRIMARY KEY (`idsurowce`);

--
-- Indeksy dla tabeli `uzytkownicy`
--
ALTER TABLE `uzytkownicy`
  ADD PRIMARY KEY (`idusera`),
  ADD UNIQUE KEY `id` (`idusera`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT dla tabeli `budynki`
--
ALTER TABLE `budynki`
  MODIFY `idbudynki` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;

--
-- AUTO_INCREMENT dla tabeli `surowce`
--
ALTER TABLE `surowce`
  MODIFY `idsurowce` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;

--
-- AUTO_INCREMENT dla tabeli `uzytkownicy`
--
ALTER TABLE `uzytkownicy`
  MODIFY `idusera` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=11;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
