/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <NSObject.h> // Unknown library
#import "GMM-Structs.h"

@class NSMutableArray;

@interface GMMTrafficTile : NSObject {
@private
	BOOL empty;	// 4 = 0x4
	double expirationTime;	// 8 = 0x8
	NSMutableArray *roadsAtSpeed[4];	// 16 = 0x10
}
@property(readonly, assign, nonatomic, getter=isEmpty) BOOL empty;	// G=0x3442b111; @synthesize
@property(readonly, assign, nonatomic) double expirationTime;	// G=0x3442b0ed; 
+ (double)defaultExpirationTime;	// 0x3442b0e1
- (id)init;	// 0x3442b1a5
- (void)dealloc;	// 0x3442b271
// declared property getter: - (double)expirationTime;	// 0x3442b0ed
- (id)getRoadsAtSpeed:(int)speed;	// 0x3442b0fd
- (void)invalidate;	// 0x3442b20d
// declared property getter: - (BOOL)isEmpty;	// 0x3442b111
- (BOOL)readFromStream:(InputDataStream *)stream tilePath:(const XXStruct_j8inqB *)path;	// 0x3442b2dd
@end

