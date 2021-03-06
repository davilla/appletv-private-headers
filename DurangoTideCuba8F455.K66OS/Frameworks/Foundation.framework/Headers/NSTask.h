/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSTask : NSObject {
}
@property(retain) id arguments;	// G=0x3108e195; S=0x3108e331; converted property
@property(retain) id currentDirectoryPath;	// G=0x3108e171; S=0x3108e311; converted property
@property(retain) id environment;	// G=0x3108e1b9; S=0x3108e2f1; converted property
@property(retain) id launchPath;	// G=0x3108e1dd; S=0x3108e2d1; converted property
@property(retain) id standardError;	// G=0x3108e0a5; S=0x3108e111; converted property
@property(retain) id standardInput;	// G=0x3108e0ed; S=0x3108e151; converted property
@property(retain) id standardOutput;	// G=0x3108e0c9; S=0x3108e131; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x3108f169
+ (id)currentTaskDictionary;	// 0x3108f07d
+ (id)launchedTaskWithDictionary:(id)dictionary;	// 0x3108f035
+ (id)launchedTaskWithLaunchPath:(id)launchPath arguments:(id)arguments;	// 0x3108ef61
- (id)init;	// 0x3108e409
// converted property getter: - (id)arguments;	// 0x3108e195
// converted property getter: - (id)currentDirectoryPath;	// 0x3108e171
// converted property getter: - (id)environment;	// 0x3108e1b9
- (void)interrupt;	// 0x3108e2b1
- (BOOL)isRunning;	// 0x3108e371
- (void)launch;	// 0x3108e351
// converted property getter: - (id)launchPath;	// 0x3108e1dd
- (int)processIdentifier;	// 0x3108e201
- (BOOL)resume;	// 0x3108e249
// converted property setter: - (void)setArguments:(id)arguments;	// 0x3108e331
// converted property setter: - (void)setCurrentDirectoryPath:(id)path;	// 0x3108e311
// converted property setter: - (void)setEnvironment:(id)environment;	// 0x3108e2f1
// converted property setter: - (void)setLaunchPath:(id)path;	// 0x3108e2d1
// converted property setter: - (void)setStandardError:(id)error;	// 0x3108e111
// converted property setter: - (void)setStandardInput:(id)input;	// 0x3108e151
// converted property setter: - (void)setStandardOutput:(id)output;	// 0x3108e131
// converted property getter: - (id)standardError;	// 0x3108e0a5
// converted property getter: - (id)standardInput;	// 0x3108e0ed
// converted property getter: - (id)standardOutput;	// 0x3108e0c9
- (BOOL)suspend;	// 0x3108e26d
- (int)suspendCount;	// 0x3108e225
- (void)terminate;	// 0x3108e291
- (int)terminationReason;	// 0x3108e395
- (int)terminationStatus;	// 0x3108e3b9
@end

