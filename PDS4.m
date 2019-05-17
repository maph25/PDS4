%Audio
[audio_in, audio_freq] = audioread('string5a.wav');
audio_lenght = length(audio_in);
audio_mono = sum(audio_in, 2)/size(audio_in,2);
sound(audio_in, audio_freq);
dt = audio_lenght/audio_freq;
ts = 1/audio_freq;
t = 0:ts:dt-ts;
figure;
plot(t,audio_mono);
title('Guitar 5th String Note A');
xlabel('Time');
ylabel('Amplitude');

%Spectrogram
spectrogram(audio_mono, 256, [], [], audio_freq, 'yaxis');

%Single-sided Frequency Spectrum of Guitar Note A
df = 1/dt;
frequency_audio = -audio_freq/2:df:audio_freq/2-ts;
figure;
FFT_audio_in = fftshift(fft(audio_in))/length(fft(audio_in));
abs_FFT_audio_in = abs(FFT_audio_in);
plot(frequency_audio, abs_FFT_audio_in);
xlim([0 3000]);
title('Guitar 5th String Note A- Frequency Spectrum');
xlabel('Frequency Hz');
ylabel('Magnitude');

%Envelope
e1 = envelope(audio_in, 50, 'peak');
e2 = envelope(e1, 50, 'peak');
e3 = envelope(e2, 50, 'peak');
figure;
hold on
plot(t, e3);
f =fit(t(:),e3_mono(:),'exp1')
plot(f);
title('Envelope of Signal with Fitted Curve');
xlabel('Time');
ylabel('Amplitude');

%Digital guitar
ff = 196; % fundamental frequency
sum_of_sines = sin(2*pi*1*ff*t)+sin(2*pi*2*ff*t)+sin(2*pi*3*ff*t)+sin(2*pi*4*ff*t)+sin(2*pi*6*ff*t)...
    +sin(2*pi*7*ff*t)+sin(2*pi*8*ff*t)+sin(2*pi*9*ff*t);
fitted_curve = 0.2613*exp(-0.564*(t-0.4));
string = fitted_curve.*(0.2*sum_of_sines);
figure;
hold on
plot(t,string);
ylim([-0.5 0.5])
xlim([0 5.4])
title('Synthetic Guitar String Note A');
xlabel('Time');
ylabel('Amplitude');
hold off
sound(string,audio_freq);
