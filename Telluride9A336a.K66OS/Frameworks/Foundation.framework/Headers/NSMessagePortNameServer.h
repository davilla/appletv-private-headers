/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSPortNameServer.h"


@interface NSMessagePortNameServer : NSPortNameServer {
}
+ (id)sharedInstance;	// 0x3371987d
- (id)portForName:(id)name;	// 0x337198b9
- (id)portForName:(id)name host:(id)host;	// 0x33719905
- (BOOL)registerPort:(id)port name:(id)name;	// 0x3371994d
- (BOOL)removePortForName:(id)name;	// 0x33719969
@end

