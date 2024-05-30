<?php

// Function to transpose a matrix
function transposeMatrix($matrix) {
    $transposedMatrix = array();

    // Get dimensions of the original matrix
    $rows = count($matrix);
    $cols = count($matrix[0]);

    // Create the transposed matrix
    for ($i = 0; $i < $cols; $i++) {
        for ($j = 0; $j < $rows; $j++) {
            $transposedMatrix[$i][$j] = $matrix[$j][$i];
        }
    }

    return $transposedMatrix;
}

// Example matrix
$matrix = array(
    array(1, 2, 3),
    array(4, 5, 6),
    array(7, 8, 9)
);

echo "Original Matrix:<br>";
foreach ($matrix as $row) {
    echo implode("\t", $row) . "<br>";
}

// Transpose the matrix
$transposedMatrix = transposeMatrix($matrix);

echo "<br>Transposed Matrix:<br>";
foreach ($transposedMatrix as $row) {
    echo implode("\t", $row) . "<br>";
}
?>