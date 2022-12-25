# csources-nimble
Nimble C Sources

Nimble commit id = 7c097675d0e00c66f9da820a35eb6671bc4f387a


``` bash
rm ~/.cache/nim/nimble_d/ -rf
nim cc --genScript src/nimble.nim
sed -i 's#-I.*nimble/src##' ~/.cache/nim/nimble_d/compile_nimble.sh
cp ~/Sources/nim/Nim/lib/nimbase.h ~/.cache/nim/nimble_d/
mkdir ~/.cache/nim/nim-workspace/ -p
rm -rf ~/Sources/nim/csources-nimble/scripts/nimble-linux/
cp -r ~/.cache/nim/nimble_d/ ~/Sources/nim/nim-workspace/scripts/nimble-linux/

rm ~/.cache/nim/nimble_d/ -rf
nim cc --os:windows --genScript src/nimble.nim
sed -i 's#-I.*nimble/src##' ~/.cache/nim/nimble_d/compile_nimble.bat
cp ~/Sources/nim/Nim/lib/nimbase.h ~/.cache/nim/nimble_d/
mkdir ~/.cache/nim/nim-workspace/ -p
rm -rf ~/Sources/nim/csources-nimble/scripts/nimble-windows/
cp -r ~/.cache/nim/nimble_d/ ~/Sources/nim/nim-workspace/scripts/nimble-windows/
```
