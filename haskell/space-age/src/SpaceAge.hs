module SpaceAge (Planet(..), ageOn) where

data Planet = Mercury
            | Venus
            | Earth
            | Mars
            | Jupiter
            | Saturn
            | Uranus
            | Neptune

ageOn :: Planet -> Float -> Float
ageOn Earth seconds = secondsToYears seconds
ageOn Mercury seconds = secondsToYears seconds / 0.2408467
ageOn Venus seconds = secondsToYears seconds / 0.61519726
ageOn Mars seconds = secondsToYears seconds / 1.8808158
ageOn Jupiter seconds = secondsToYears seconds / 11.862615
ageOn Saturn seconds = secondsToYears seconds / 29.447498
ageOn Uranus seconds = secondsToYears seconds / 84.016846
ageOn Neptune seconds = secondsToYears seconds / 164.79132


secondsToYears sec = sec/31557600