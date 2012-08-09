/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"
#import "BRITunesUtilities.h"


__attribute__((visibility("hidden")))
@interface BRITunesLibraryUtilitiesAccess : BRSingleton <BRITunesUtilities> {
	id<BRITunesUtilities> _utilitiesDelegate;	// 4 = 0x4
}
+ (void)setSingleton:(id)singleton;	// 0x386e21
+ (id)singleton;	// 0x386e11
- (BOOL)attemptAuthorizationForAsset:(id)asset error:(id *)error;	// 0x386eb9
- (void)dealloc;	// 0x386e31
- (void)deauthorizeAssetIfNecessary:(id)necessary;	// 0x386ee1
- (void)deleteImportedKeybagData;	// 0x38707d
- (id)iTunesCompareAscending:(BOOL)ascending withKey:(id)key;	// 0x386f79
- (id)iTunesCompareAscending:(BOOL)ascending withKey:(id)key fallbackSortSelector:(SEL)selector;	// 0x386f01
- (int)iTunesCompareString:(id)string toString:(id)string2;	// 0x386fbd
- (void)importKeybagData:(id)data forDSID:(id)dsid;	// 0x38705d
- (id)keyBagPathForMachineID:(unsigned long long)machineID;	// 0x38701d
- (unsigned long)randomPlaylistIndex:(unsigned long)index;	// 0x386ffd
- (id)rentalGUID;	// 0x38703d
- (void)setITunesUtilitiesDelegate:(id)delegate;	// 0x386e7d
- (id)sortStringForString:(id)string;	// 0x386f9d
- (id)urlSuitableForPlayback:(id)playback;	// 0x386fdd
@end
