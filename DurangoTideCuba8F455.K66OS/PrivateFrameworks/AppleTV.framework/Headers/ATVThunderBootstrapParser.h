/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRBaseParserDelegate.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ATVThunderBootstrapParser : BRBaseParserDelegate {
@private
	NSMutableDictionary *_urlBag;	// 12 = 0xc
}
@property(readonly, retain) NSMutableDictionary *urlBag;	// G=0x306d7841; converted property
- (id)init;	// 0x306d7a1d
- (void)dealloc;	// 0x306d79d5
- (void)populateURLForKey:(id)key attributes:(id)attributes;	// 0x306d7981
- (void)startAddChoiceTeamWithAttributes:(id)attributes;	// 0x306d78a9
- (void)startGetChoiceTeamWithAttributes:(id)attributes;	// 0x306d78cd
- (void)startStreamWithAttributes:(id)attributes;	// 0x306d78f1
- (void)startUserAuthenticationWithAttributes:(id)attributes;	// 0x306d795d
- (void)startUserAuthorizationWithAttributes:(id)attributes;	// 0x306d7939
- (void)startUserLocationWithAttributes:(id)attributes;	// 0x306d7915
// converted property getter: - (id)urlBag;	// 0x306d7841
@end
