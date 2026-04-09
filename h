body {
    font-family: sans-serif;
    text-align: center;
    background-color: #2c3e50;
    color: white;
    user-select: none;
}

#game-container { margin-top: 50px; }

button {
    padding: 15px 25px;
    font-size: 18px;
    cursor: pointer;
    margin: 10px;
    border-radius: 8px;
    border: none;
    transition: transform 0.1s;
}

button:active { transform: scale(0.95); }

#click-btn { background-color: #e74c3c; color: white; padding: 40px; }

.floating-text {
    position: absolute;
    color: #ffd700;
    font-weight: bold;
    pointer-events: none;
    animation: moveUpAndFade 0.8s ease-out forwards;
}

@keyframes moveUpAndFade {
    0% { transform: translateY(0); opacity: 1; }
    100% { transform: translateY(-50px); opacity: 0; }
}

.achievement-pop {
    position: fixed;
    bottom: 20px;
    right: 20px;
    background: #333;
    padding: 15px;
    border-left: 5px solid #ffd700;
    animation: slideIn 0.5s ease-out;
}

@keyframes slideIn {
    from { transform: translateX(100%); }
    to { transform: translateX(0); }
}
