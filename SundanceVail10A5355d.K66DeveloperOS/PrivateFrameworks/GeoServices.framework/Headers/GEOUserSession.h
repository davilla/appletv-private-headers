/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"


@interface GEOUserSession : NSObject {
	double _lastSessionCreationTime;	// 4 = 0x4
	XXStruct_t9EeIA _sessionID;	// 12 = 0xc
	XXStruct_t9EeIA _probeID;	// 28 = 0x1c
}
@property(readonly, assign) XXStruct_t9EeIA probeID;	// G=0x345516f9; @synthesize=_probeID
@property(readonly, assign) XXStruct_t9EeIA sessionID;	// G=0x34551651; 
+ (id)sharedInstance;	// 0x34551391
- (id)init;	// 0x345514d5
- (void)_updateWithNewUUIDForSessionID:(XXStruct_t9EeIA *)sessionID;	// 0x345513fd
// declared property getter: - (XXStruct_t9EeIA)probeID;	// 0x345516f9
// declared property getter: - (XXStruct_t9EeIA)sessionID;	// 0x34551651
@end

