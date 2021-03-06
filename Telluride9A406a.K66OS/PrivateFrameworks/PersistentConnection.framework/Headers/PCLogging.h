/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <NSObject.h> // Unknown library


@interface PCLogging : NSObject {
}
+ (void)_appendString:(id)string toFileNamed:(id)fileNamed;	// 0x36370e15
+ (id)_stringWithCurrentTime;	// 0x363710e5
+ (void)enableConsoleLoggingForLevel:(int)level;	// 0x36370bb5
+ (void)enableFileLogging:(BOOL)logging;	// 0x36370bc9
+ (void)enableLoggingForCustomHandler:(id)customHandler;	// 0x36370ce5
+ (void)initialize;	// 0x36371571
+ (void)logAtLevel:(int)level delegate:(id)delegate format:(id)format;	// 0x36371549
+ (void)logAtLevel:(int)level delegate:(id)delegate format:(id)format arguments:(void *)arguments;	// 0x3637116d
+ (id)logFileDirectory;	// 0x36371141
+ (void)logKeepAliveInterval:(double)interval forServiceIdentifier:(id)serviceIdentifier;	// 0x36370bdd
+ (BOOL)loggingEnabledForLevel:(int)level;	// 0x36370b91
@end

