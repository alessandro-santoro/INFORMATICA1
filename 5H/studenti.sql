CREATE DATABASE IF NOT EXISTS studenti;
USE studenti;


CREATE TABLE corsi (
    id INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(50) NOT NULL
);

CREATE TABLE studenti (
    matricola INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(50) NOT NULL,
    cognome VARCHAR(50) NOT NULL,
    data_nascita DATE NOT NULL,
    FK_corsi INT NOT NULL,
    FOREIGN KEY (FK_corsi) REFERENCES corsi(id) ON DELETE NO ACTION ON UPDATE CASCADE
);

CREATE TABLE materie (
    id INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(100) NOT NULL
);

CREATE TABLE valutazioni (
    id INT AUTO_INCREMENT PRIMARY KEY,
    FK_studenti INT NOT NULL,
    FK_materie INT NOT NULL,
    voto INT NOT NULL,
    FOREIGN KEY (FK_studenti) REFERENCES studenti(matricola) ON DELETE NO ACTION ON UPDATE CASCADE,
    FOREIGN KEY (FK_materie) REFERENCES materie(id) ON DELETE NO ACTION ON UPDATE CASCADE
);


INSERT INTO corsi (nome) VALUES
('Informatica'),
('Artistico'),
('Scientifico'),
('Lingue'),
('Scieze Umane'),
('Economia');


INSERT INTO studenti (nome, cognome, data_nascita, FK_corsi) VALUES
('Manuel', 'Rossi', '1995-05-20', 1),
('Andrea', 'Bianchi', '1998-08-15', 2),
('Daniele', 'menicucci', '1997-03-10', 3),
('Sara', 'Neri', '1996-12-12', 4),
('Giorgio', 'Gialli', '1999-07-05', 1),
('Giovanni', 'Pellegrini', '1998-11-01', 2),
('Tommaso', 'Sollo', '1997-06-07', 3),
('Elisa', 'Maconi', '1996-10-03', 4);


INSERT INTO materie (nome) VALUES
('Diritto'),
('Geometria'),
('Informatica'),
('Italiano'),
('Inglese'),
('Lettere'),
('Matematica');


INSERT INTO valutazioni (FK_studenti, FK_materie, voto) VALUES
(1, 1, 5),
(1, 2, 10),
(1, 3, 7),
(1, 4, 3),
(1, 5, 6),
(2, 1, 8),
(2, 2, 9),
(2, 3, 4),
(2, 4, 6),
(2, 5, 5),
(3, 1, 5),
(3, 2, 7),
(3, 3, 8),
(3, 4, 4),
(3, 5, 8),
(4, 1, 5),
(4, 2, 4),
(4, 3, 10),
(4, 4, 9),
(4, 5, 7),
(5, 1, 9),
(5, 2, 2),
(5, 3, 2),
(5, 4, 2),
(5, 5, 10),
(6, 1, 9),
(6, 2, 3),
(6, 3, 8),
(6, 4, 7),
(6, 5, 4),
(7, 1, 10),
(7, 2, 6),
(7, 3, 6),
(7, 4, 6),
(7, 5, 6),
(8, 1, 6),
(8, 2, 6),
(8, 3, 6),
(8, 4, 7),
(8, 5, 2);

select s.cognome, s.nome, s.data_nascita from studenti s;


