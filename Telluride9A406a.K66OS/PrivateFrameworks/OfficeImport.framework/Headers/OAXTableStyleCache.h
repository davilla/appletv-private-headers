/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface OAXTableStyleCache : NSObject {
@private
	NSString *mDefaultStyleId;	// 4 = 0x4
	NSMutableDictionary *mCache;	// 8 = 0x8
}
@property(retain) id defaultStyleId;	// G=0x32ac6f45; S=0x329c8229; converted property
- (id)init;	// 0x329c7cb1
- (void)dealloc;	// 0x329cf369
// converted property getter: - (id)defaultStyleId;	// 0x32ac6f45
- (xmlNode *)defaultStyleNode;	// 0x329cc475
// converted property setter: - (void)setDefaultStyleId:(id)anId;	// 0x329c8229
- (void)setStyleNode:(xmlNode *)node forId:(id)anId;	// 0x329efd51
- (xmlNode *)styleNodeForId:(id)anId;	// 0x329cc495
@end

