#include "audio.h"
#include "settings.h"

class Sound;

static QCache<QString, Sound> SoundCache;

class Sound
{
public:
    Sound(const QString &filename)
    {
    }

    ~Sound()
    {
    }

    void play()
    {
    }

    bool isPlaying() const
    {
		return false;
    }

private:
};

void Audio::init()
{
}

void Audio::quit()
{
    SoundCache.clear();
}

void Audio::play(const QString &filename, bool superpose)
{
    Sound *sound = SoundCache[filename];
    if (sound == NULL) {
        sound = new Sound(filename);
        SoundCache.insert(filename, sound);
    } else if (!superpose && sound->isPlaying()) {
        return;
    }

    sound->play();
}

void Audio::stop()
{
}

void Audio::playBGM(const QString &filename)
{
}

void Audio::setBGMVolume(float volume)
{
}

void Audio::stopBGM()
{
}

QString Audio::getVersion()
{
	return QString();
}

