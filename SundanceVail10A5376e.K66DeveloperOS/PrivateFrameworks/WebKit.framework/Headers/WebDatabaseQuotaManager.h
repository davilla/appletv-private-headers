/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebQuotaManager.h"

@class WebSecurityOrigin;

@interface WebDatabaseQuotaManager : NSObject <WebQuotaManager> {
	WebSecurityOrigin *_origin;	// 4 = 0x4
}
@property(readonly, retain) WebSecurityOrigin *origin;	// G=0x323223d9; converted property
@property(assign) unsigned long long quota;	// G=0x32322421; S=0x32322459; converted property
- (id)initWithOrigin:(id)origin;	// 0x32322395
// converted property getter: - (id)origin;	// 0x323223d9
// converted property getter: - (unsigned long long)quota;	// 0x32322421
// converted property setter: - (void)setQuota:(unsigned long long)quota;	// 0x32322459
- (unsigned long long)usage;	// 0x323223e9
@end

