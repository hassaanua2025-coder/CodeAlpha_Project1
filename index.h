<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Calculator</title>
    <link rel="stylesheet" href="style.css">
</head>

<body>
    <div class="card">
        <div class="header">
            <div class="icon">+</div>
            <h1>Calculator</h1>
            <p class="subtitle">A simple calculator</p>
        </div>

        <div class="inputs">
            <div class="input-box">
                <label>First Number</label>
                <input type="number" id="num1" placeholder="Enter number">
            </div>
            <div class="input-box">
                <label>Second Number</label>
                <input type="number" id="num2" placeholder="Enter number">
            </div>
        </div>
        <div class="operations">
            <div class="operations-title">Select Operation</div>

            <div class="buttons">
                <button onclick="calculate('+')">+</button>
                <button onclick="calculate('-')">-</button>
                <button onclick="calculate('*')">×</button>
                <button onclick="calculate('/')">÷</button>
            </div>
        </div>

        <div class="result">
            <div class="result-label">Result</div>
            <div id="result">0</div>
        </div>

        <button class="clear" onclick="clearCalculator()">Clear All</button>

    </div>
</body>
