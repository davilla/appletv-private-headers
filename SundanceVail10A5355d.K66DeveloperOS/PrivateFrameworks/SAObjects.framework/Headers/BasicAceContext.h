/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceContext.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface BasicAceContext : NSObject <AceContext> {
	NSMutableDictionary *_groupMap;	// 4 = 0x4
	NSMutableDictionary *_objectMap;	// 8 = 0x8
}
- (id)init;	// 0x365ff4a9
- (id)aceObjectWithDictionary:(id)dictionary;	// 0x365ffa81
- (void)addAcronym:(id)acronym forGroup:(id)group;	// 0x365ff90d
- (void)addClass:(Class)aClass forCommand:(id)command inGroup:(id)group;	// 0x365ff92d
- (Class)classWithClassName:(id)className group:(id)group;	// 0x365ff991
- (void)dealloc;	// 0x365ff8a9
@end

