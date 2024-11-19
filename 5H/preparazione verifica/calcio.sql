CREATE DATABASE IF NOT EXISTS zoo;
USE zoo;

CREATE TABLE IF NOT EXISTS animale{
    id_animale INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(50) NOT NULL,
    data_nascita DATE NOT NULL,
    colore_predominante VARCHAR(50) NOT NULL,
    specie VARCHAR(50) NOT NOT
};

CREATE TABLE IF NOT EXISTS specie{
    id_specie INT AUTO_INCREMENT PRIMARY KEY,
    descrizione VARCHAR(50),
    cibo_preferito VARCHAR(50) NOT NULL
};

CREATE TABLE IF NOT EXISTS settore{
    id_settore INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(50) NOT NULL,
    posizione VARCHAR(50) NOT NULL
};


INSERT INTO animale(nome, data_nascita, colore_predominante, specie)
VALUES
    ('tigre','13-05-2020','arancione','tigre'),
    ('leone','09-02-2015','giallo','leone');

INSERT INTO specie(descrizione, cibo_preferito)
VALUES 
    (NULL, 'carne'),
    (NULL, 'carne');

INSERT INTO settore(nome, posizione)
    ('foresta tropicale',NULL),
    ('savana',NULL);
