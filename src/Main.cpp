#include "SoX/FileSystemXenon.hpp"
#include "System/Singleton.hpp"

Sonicteam::System::Singleton<Sonicteam::SoX::FileSystemXenon> TheFS;

int main(int argc, char **argv) {
	TheFS.GetSingleton();
	return 0;
}
