# 🎮 GameModed – Auto Game Boosting for Linux

**GameModed** is a lightweight background service that automatically **optimizes your system performance when you launch a game**. No need to click anything, no setup required — just launch your game and let GameModed do the rest. ⚡🕹️

---

## 🔧 Features

- 🎮 **Automatic Game Detection** – No manual config needed  
- 🔄 **Reverts Settings** after game exit to avoid draining system resources  
- 🐧 **Native Linux Support** – Works on most major distros  
- 🧊 **Super Lightweight** – Runs as a background service with minimal footprint

---

## 🛠️ Installation

### 📦 From Source

```bash
git clone https://github.com/Skyghost090/gamemoded.git
cd gamemoded
make
sudo make install
```

### 🧰 Requirements

- `xdo`  
- `xlib`  

---

## ⚙️ How It Works

1. It monitors running processes for games (e.g. Steam, Lutris, Wine, native games)  
2. When a game is detected:
   - 📊 Process is given higher priority
   - 🚫 Unnecessary background tasks are deprioritized  
3. When the game exits:
   - 🔄 System settings return to normal automatically

---

## ▶️ Usage

GameModed works **out of the box** once installed. Just launch your game!

```bash
gamemoded &
```  

---

## 🧪 Compatibility

✅ Works with:

- Native Linux games  
- Steam (including Proton)  
- Wine / Lutris  
- Emulators and standalone games 

---

## 🙌 Contributing

Want to help make Linux gaming smoother? 🎮  
Feel free to open issues, suggest features, or submit PRs!

1. Fork the repo  
2. Create a branch (`git checkout -b feature-name`)  
3. Commit and push  
4. Open a Pull Request 🧑‍💻

---

## 🆘 Support

Questions? Issues?  
Open a ticket here on GitHub and we’ll help out!

---

## 📜 License

This project is licensed under the **GPL License**.  
Check the [LICENSE](LICENSE) file for full terms.
