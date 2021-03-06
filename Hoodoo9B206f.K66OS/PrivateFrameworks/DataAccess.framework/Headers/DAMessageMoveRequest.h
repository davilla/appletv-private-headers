/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface DAMessageMoveRequest : NSObject {
	NSString *_message;	// 4 = 0x4
	NSString *_fromFolder;	// 8 = 0x8
	NSString *_toFolder;	// 12 = 0xc
	id _context;	// 16 = 0x10
}
@property(retain) id context;	// G=0x31eb6b25; S=0x31eb6b39; @synthesize=_context
@property(readonly, assign) NSString *fromFolder;	// G=0x31eb6b05; @synthesize=_fromFolder
@property(readonly, assign) NSString *message;	// G=0x31eb6af5; @synthesize=_message
@property(readonly, assign) NSString *toFolder;	// G=0x31eb6b15; @synthesize=_toFolder
- (id)initMoveRequestWithMessage:(id)message fromFolder:(id)folder toFolder:(id)folder3;	// 0x31eb67a1
// declared property getter: - (id)context;	// 0x31eb6b25
- (void)dealloc;	// 0x31eb6a6d
- (id)description;	// 0x31eb69e5
// declared property getter: - (id)fromFolder;	// 0x31eb6b05
- (unsigned)hash;	// 0x31eb6831
- (BOOL)isEqual:(id)equal;	// 0x31eb68cd
// declared property getter: - (id)message;	// 0x31eb6af5
// declared property setter: - (void)setContext:(id)context;	// 0x31eb6b39
// declared property getter: - (id)toFolder;	// 0x31eb6b15
@end

