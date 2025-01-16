CREATE DATABASE IF NOT EXISTS studenti;
use studenti;

CREATE TABLE IF NOT EXISTS corso_studi;(
    codice INT AUTO_INCREMENT PRIMARY KEY,
    nome_corso VARCHAR(50) NOT NULL
);

CREATE TABLE IF NOT EXISTS disciplina;(
    codice_disc INT AUTO_INCREMENT PRIMARY KEY,
    nome_disc VARCHAR(50) NOT NULL
);

CREATE TABLE IF NOT EXISTS studenti(
    matricola INT AUTO_INCREMENT PRIMARY KEY,
    cognome VARCHAR (50) NOT NULL,
    nascita DATE NOT NULL,
    capo_gruppo INT NOT NULL
);

CREATE TABLE IF NOT EXISTS valutazioni(
    codice_val INT AUTO_INCREMENT PRIMARY KEY,
    voto int NOT NULL,
    data_voto DATE NOT NULL,
    
)


