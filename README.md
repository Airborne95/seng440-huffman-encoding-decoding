# seng440-huffman-encoding-decoding
Authors: Rafay and Nicole

## General information

In general, the encoding file must be run first and the decoding file second. In the encoding file you can add a string that adheres to the specified alphabet to encode it; the encoding file generates a binary string. The generated binary string from the encoding file can be copied over the decoding file to be decoded, this decoded file should produce the original string that was fed to the encoding file.

Sample input for the encoding files:
```
afCfaaKaaaIKIf3saFbFnAbfBEaba.HbdbafaRLAiCεbFabAbAhBcAejσjaabdc^cdabAIABfBeDAeDAdHbAaKbEcbb72DaCbeCA
```

Generated output from the encoding file using the string above:
```
00010110011010110000000011111100000000000111110011111100111110101101111111111111110001111111110000111101001111010111111001010010110110011100001000001111111111111111111110111110100101010000010110000111111111101111111001000111100110001111111111111111111111010011110000100010100010101110110001001000110101111001111111111111111111111111010111100000001001010001011111111111111111100010101000010001001111100101101011011000110111001000110111001010101111101000100000111111010001110001010010011111111111111110101111111111111011100000110100001100110010
```

Generated output from the decoding file using the binary string above:
```
afCfaaKaaaIKIf3saFbFnAbfBEaba.HbdbafaRLAiCεbFabAbAhBcAejσjaabdc^cdabAIABfBeDAeDAdHbAaKbEcbb72DaCbeCA
```

Files:

`original_encoding.c`
>Encoder for the original software solution

`original_decoding.c`
>Decoder for the original software solution

`original_encoding.s`
>Assembly for the eoriginal software solution encoder

`original_decoding.s`
>Assembly for the original software solution decoder

`encoding.c`
>Encoder for the optimized software solution

`decoding.c`
>Decoder for the optimized software solution

`encoding.s`
>Assembly for the optimized software solution encoder

`decoding.s`
>Assembly for the optimized software solution decoder

## General Instructions
1. Update `encoder.c` or `original_decoding.c` with the alphabe string that should be converted into a binary string
2. Compile and run `encoder.c` or `original_decoding.c`
3. Take the generated binary string from step 2 and add it into the decoding file.
4. Compile and run `decoding.c` or `original_decoding.c`


## Instructions Using GNU Compiler Collection (GCC)
Compile
>`gcc encoding.c -o encoding`

Run:
>`./encoding`

Compile
>`gcc decoding.c -o decoding`

Run:
>`./decoding`

## Instructions Using an ARM Processor
Generate assembly:
>`arm-linux-gcc -S encoding.c decoding.c original_encoding.c original_decoding.c`

Compile:
>
```
arm-linux-gcc -static -o encoding.exe encoding.c
lftp user2@arm
q6coHjd7P 		//password
put encoding.exe
bye
```
>
```
telnet arm
user2         //login
q6coHjd7P 		/password
chmod +x encoding.exe
./encoding.exe
exit
```

## ssh commands

Login in to remote server:
>`ssh <username>@seng440.ece.uvic.ca`

Remote to Local (from the local):
>`scp <username>@seng440.ece.uvic.ca:<path_to_file_on_remote_server>
encoding.s <path_to_file_on_local_host>`

Local to Remote:
>`scp <path_to_file_on_local_host> <username>@seng440.ece.uvic.ca:<path_to_file_on_remote_server>`

## Other links:
Google Drive: https://drive.google.com/drive/folders/14dY9IhOMn8cQ-F7T5cyE7YLHbRDt_Cq-?usp=sharing

To generate a string (that can be fed into the encoders) the google sheets, navigate to the sheet `Generate string` and click on the check box
