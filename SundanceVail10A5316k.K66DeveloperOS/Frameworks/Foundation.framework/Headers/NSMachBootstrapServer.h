/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSPortNameServer.h"


@interface NSMachBootstrapServer : NSPortNameServer {
}
+ (id)sharedInstance;	// 0x31ab88c5
- (id)portForName:(id)name;	// 0x31ab899d
- (id)portForName:(id)name host:(id)host;	// 0x31ab8b49
- (id)portForName:(id)name options:(unsigned)options;	// 0x31ab8901
- (BOOL)registerPort:(id)port name:(id)name;	// 0x31ab89b1
- (BOOL)removePortForName:(id)name;	// 0x31ab8b91
- (id)servicePortWithName:(id)name;	// 0x31ab8a5d
@end

