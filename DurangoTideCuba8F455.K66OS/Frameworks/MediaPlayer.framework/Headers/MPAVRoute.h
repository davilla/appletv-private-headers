/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface MPAVRoute : NSObject {
@private
	NSString *_routeName;	// 4 = 0x4
	unsigned _routeIndex;	// 8 = 0x8
	int _routeType;	// 12 = 0xc
	BOOL _isPicked;	// 16 = 0x10
	BOOL _requiresPassword;	// 17 = 0x11
}
@property(assign, nonatomic) BOOL isPicked;	// G=0x3364ce45; S=0x3364ce55; @synthesize=_isPicked
@property(readonly, assign, nonatomic) NSString *name;	// G=0x3364ce35; @synthesize=_routeName
@property(readonly, assign, nonatomic) BOOL requiresPassword;	// G=0x3364ce25; @synthesize=_requiresPassword
@property(readonly, assign, nonatomic) unsigned routeIndex;	// G=0x3364ce65; @synthesize=_routeIndex
@property(readonly, assign, nonatomic) int routeType;	// G=0x3364ce15; @synthesize=_routeType
+ (id)_availableRoutesFromAudioDeviceController:(id)audioDeviceController forType:(unsigned)type;	// 0x3364ce75
+ (BOOL)availableRoutesExistForType:(unsigned)type;	// 0x3364d029
+ (id)availableRoutesForType:(unsigned)type;	// 0x3364d131
- (id)initWithName:(id)name routeType:(int)type routeIndex:(unsigned)index requiresPassword:(BOOL)password;	// 0x3364d0ad
- (void)dealloc;	// 0x3364d065
// declared property getter: - (BOOL)isPicked;	// 0x3364ce45
// declared property getter: - (id)name;	// 0x3364ce35
// declared property getter: - (BOOL)requiresPassword;	// 0x3364ce25
// declared property getter: - (unsigned)routeIndex;	// 0x3364ce65
// declared property getter: - (int)routeType;	// 0x3364ce15
// declared property setter: - (void)setIsPicked:(BOOL)picked;	// 0x3364ce55
@end

