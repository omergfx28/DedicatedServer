## 🔧 Bu Reponun İçeriği
Bu depo, Unreal Engine'de Steam destekli, Dedicated Server altyapısını uygulamalı olarak öğrenmek isteyenler için hazırlanmış **hazır bir başlangıç projesidir.**
Projenin içeriği; sunucu derleme, client bağlantı testi ve Steam entegrasyonu gibi tüm temel adımları kapsamaktadır.

---
## 📚 Komutlar

- Server başlatma (log takibi ile)
```bash
.\DedicatedServerServer.exe -log -LogCmds="LogOnlineSession Verbose"
```

- Opsiyonel: Ek parametrelerle
```bash
.\DedicatedServerServer.exe -log -port=7777 -SteamServerName="SUNUCUADI"
```

- Client başlatma (pencere boyutuyla)
```bash
.\DedicatedServerClient.exe -windowed -resx=800 -resy=450
```

- Şifresiz giriş: 
```bash
# Varsayılan Komut:
open steam.GAMEID:GAMEPORT
# Örnek:
open steam.90272158146462723:7777
```
- Şifreli giriş: 
```bash
# Varsayılan Komut:
open steam.GAMEID:GAMEPORT?Password=ENTEREDPASSWORD
# Örnek:
open steam.90272158146462723:7777?Password=Selam
```

### 🧩 Hazırlık ve Yapılandırma
- Gerekli pluginler, source engine ve örnek içerikler
- `DefaultEngine.ini` yapılandırması
- `GameInstance` içinde bağlantı kontrolü ve Steam oturum yönetimi
- Server ve Client için ayrı `Target.cs` dosyalarının oluşturulması

### ⚙️ Derleme ve Paketleme
- Dedicated Server & Client için ayrı ayrı Build alma
- Content Cook işlemleri
- Windows için Server ve Client Packaging
- Sunucu başlatma ve istemci bağlantı testi

### 🔧 Ek Yapılandırmalar
- `ServerSettings.ini` üzerinden sunucu parametreleri
- `OnlineSessionAsyncSteam.cpp` ve `OnlineSessionInterfaceSteam.cpp` içinde `GetCustomDedicatedServerName()` fonksiyonu ile Steam tarafı ayarları

### 🌐 Steam Server Browser & Oyun İçi Server Browser
- Steam üzerinden görünür sunucu listesi
- Oyun içi Server Browser sistemi

### 🌍 Ağ ve Güvenlik
- VDS / Public IP yapılandırması
- `GameMode → PreLogin()` işlemleri
- Windows Güvenlik Duvarı port ayarları

---

## 📚 İlgili Dökümantasyon & Kaynaklar

- [Advanced Steam Sessions](https://vreue4.com/advanced-sessions-binaries)  
- [Steam Sockets](https://dev.epicgames.com/documentation/en-us/unreal-engine/using-steam-sockets-in-unreal-engine)  
- [Dedicated Servers Setup](https://dev.epicgames.com/documentation/en-us/unreal-engine/setting-up-dedicated-servers-in-unreal-engine?application_version=5.6)  
- [Target File Referansı](https://dev.epicgames.com/documentation/en-us/unreal-engine/unreal-engine-build-tool-target-reference?application_version=5.6)  
- [Build Configuration Ayarları](https://dev.epicgames.com/documentation/en-us/unreal-engine/build-configurations-reference-for-unreal-engine?application_version=5.6)  
- [Content Cook Rehberi](https://dev.epicgames.com/documentation/en-us/unreal-engine/cooking-content-in-unreal-engine?application_version=5.6)  

---

## 📘 Ek Kaynaklar

- 🎓 [Unreal Engine Multiplayer Kursu (Udemy)](https://www.udemy.com/course/unreal-engine-multiplayer-steam-ogrenin/)  
- 📖 [Unreal Multiplayer Rehberi (GitBook)](https://murattiomer.gitbook.io/unreal-engine-multiplayer-altyapisi)  
- 💬 [Discord Topluluğu](https://discord.gg/qvYAs2eKQd)

---

Destek verdiğiniz için teşekkürler! İyi çalışmalar! 🙏
