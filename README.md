## 🖥️ Unreal Engine Dedicated Server

Bu proje, Unreal Engine üzerinde **Steam destekli Dedicated Server** kurulumunu öğrenmek isteyen geliştiriciler için hazırlanmış hazır başlangıç projesidir.  
Sunucu derleme, Steam entegrasyonu ve istemci bağlantı testleri dahil tüm temel yapı taşlarını içerir.

---

## 🧠 Projede Öğrenecekleriniz

- Plugin ve Steam kurulumları
- OnlineSubsystem ve Steam yapılandırması
- Steam Sockets kullanımı
- Dedicated Server derleme ve paketleme
- Ayrı Client ve Server Target dosyaları
- DefaultEngine.ini için gerekli yapılandırmalar
- Steam Server Name ve Session yapılandırması
- Listen server vs dedicated server farkı
- Public IP ve VDS yapılandırması
- Server Browser entegrasyonu (Steam + oyun içi)
- Güvenlik duvarı ve port ayarları
- PreLogin ve oturum doğrulama mantığı

> Proje, Blueprint ve C++ tarafında temel örnekler ile desteklenmiştir.

---

## 🚀 Komutlar

### Server Başlatma (Log ile)
```bash
.\DedicatedServerServer.exe -log -LogCmds="LogOnlineSession Verbose"
```

### Ek Parametreler ile Server Başlatma
```bash
.\DedicatedServerServer.exe -log -port=7777 -SteamServerName="SUNUCUADI"
```

### Client Başlatma (Pencere Boyutu ile)
```bash
.\DedicatedServerClient.exe -windowed -resx=800 -resy=450
```

### Şifresiz Giriş
```bash
open steam.GAMEID:GAMEPORT
# örnek
open steam.90272158146462723:7777
```

### Şifreli Giriş
```bash
open steam.GAMEID:GAMEPORT?Password=ENTEREDPASSWORD
# örnek
open steam.90272158146462723:7777?Password=Selam
```

---

## 📚 Resmi Kaynaklar

- [Dedicated Server Kurulumu](https://dev.epicgames.com/documentation/en-us/unreal-engine/setting-up-dedicated-servers-in-unreal-engine)
- [Steam Sockets](https://dev.epicgames.com/documentation/en-us/unreal-engine/using-steam-sockets-in-unreal-engine)
- [UE Build Tool Target Files](https://dev.epicgames.com/documentation/en-us/unreal-engine/unreal-engine-build-tool-target-reference)
- [Build Configs](https://dev.epicgames.com/documentation/en-us/unreal-engine/build-configurations-reference-for-unreal-engine)
- [Content Cooking](https://dev.epicgames.com/documentation/en-us/unreal-engine/cooking-content-in-unreal-engine)

---

## ⭐ Destek

- 🎓 **Unreal Engine Multiplayer Kursu (Udemy):** https://www.udemy.com/course/unreal-engine-multiplayer-steam-ogrenin/  
- 📘 **Multiplayer GitBook:** https://murattiomer.gitbook.io/unreal-engine-multiplayer-altyapisi  
- 💬 **Discord Topluluğu:** https://discord.gg/qvYAs2eKQd  

Projeyi faydalı bulduysanız ⭐ bırakmayı unutmayın.
Öneri ve geliştirmelere her zaman açığım.

İyi çalışmalar!
