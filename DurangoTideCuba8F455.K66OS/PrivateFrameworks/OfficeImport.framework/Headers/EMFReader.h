/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "MFReader.h"

@class EMFPlayer;

__attribute__((visibility("hidden")))
@interface EMFReader : NSObject <MFReader> {
@private
	EMFPlayer *m_player;	// 4 = 0x4
}
- (id)initWithEMFPlayer:(id)emfplayer;	// 0x32b9a535
- (void)dealloc;	// 0x32ba9815
- (int)play:(id)play;	// 0x32b9a55d
- (oneway void)release;	// 0x32ba97e9
@end

