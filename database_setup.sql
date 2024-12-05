-- Create the 'college' database
CREATE DATABASE college;

-- Switch to the 'college' database
USE college;

-- Create the 'student' table
CREATE TABLE student (
    firstname VARCHAR(15),
    lastname VARCHAR(15),
    roll INT,
    uid BIGINT,
    department VARCHAR(15),
    gender CHAR(1)
);

-- Create the 'teacher' table
CREATE TABLE teacher (
    firstname VARCHAR(15),
    lastname VARCHAR(15),
    uid BIGINT,
    department VARCHAR(30),
    gender CHAR(1)
);

-- Create the 'staff' table
CREATE TABLE staff (
    firstname VARCHAR(15),
    lastname VARCHAR(15),
    uid BIGINT,
    work VARCHAR(30),
    gender CHAR(1)
);
