@echo off
cd /d F:\steamcmd
steamcmd.exe +login anonymous +workshop_download_item 221100 MOD_ID_HERE validate +quit

:: Replace MOD_ID_HERE with actual Workshop IDs
:: Example for CF: +workshop_download_item 221100 1559212036
```

This auto-downloads latest versions.

---

## Method 3: Check for Updates Manually

### Before Each Server Start:
1. Check your subscribed Workshop items in Steam
2. See if any show "Update queued" or recent update dates
3. If updated, repeat Method 1 steps

---

## Quick Method (What I Do):

### When You Know a Mod Updated:

1. **Stop server**
2. **Go to mod's Workshop folder**:
```
   steamapps\workshop\content\221100\[MOD_ID]\