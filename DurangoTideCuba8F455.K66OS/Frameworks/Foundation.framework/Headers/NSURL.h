/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSURL.h> // Unknown library


@interface NSURL (NSKeyValueObservingCustomization)
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3109083d
@end

@interface NSURL (NSURLPathUtilities)
+ (id)fileURLWithPathComponents:(id)pathComponents;	// 0x31090fbd
- (id)URLByAppendingPathComponent:(id)component;	// 0x31090f1d
- (id)URLByAppendingPathComponent:(id)component isDirectory:(BOOL)directory;	// 0x31091e41
- (id)URLByAppendingPathExtension:(id)extension;	// 0x31091efd
- (id)URLByDeletingLastPathComponent;	// 0x31091ed1
- (id)URLByDeletingPathExtension;	// 0x310911c5
- (id)URLByResolvingSymlinksInPath;	// 0x31090841
- (id)URLByStandardizingPath;	// 0x310908b1
- (id)lastPathComponent;	// 0x31090921
- (id)pathComponents;	// 0x31090945
- (id)pathExtension;	// 0x31034ddd
@end

@interface NSURL (NSURL)
+ (id)URLWithString:(id)string;	// 0x3100bd85
+ (id)URLWithString:(id)string relativeToURL:(id)url;	// 0x3100bd9d
+ (id)allocWithZone:(NSZone *)zone;	// 0x3100bddd
+ (id)fileURLWithPath:(id)path;	// 0x31021111
+ (id)fileURLWithPath:(id)path isDirectory:(BOOL)directory;	// 0x310259a9
- (id)init;	// 0x31091119
- (id)initFileURLWithPath:(id)path;	// 0x31021149
- (id)initFileURLWithPath:(id)path isDirectory:(BOOL)directory;	// 0x31012de5
- (id)initWithCoder:(id)coder;	// 0x31090b01
- (id)initWithScheme:(id)scheme host:(id)host path:(id)path;	// 0x310915dd
- (id)initWithString:(id)string;	// 0x31020fed
- (id)initWithString:(id)string relativeToURL:(id)url;	// 0x3100be29
- (unsigned long)_cfTypeID;	// 0x31090f11
- (CFURLRef)_cfurl;	// 0x30fff4dd
- (CFDictionaryRef)_clientsCreatingIfNecessary:(BOOL)necessary;	// 0x31091561
- (void)_freeClients;	// 0x3109109d
- (id)_initWithMinimalBookmarkData:(id)minimalBookmarkData;	// 0x31090da9
- (BOOL)_isAbsolute;	// 0x31031c81
- (id)_relativeURLPath;	// 0x310915b1
- (id)absoluteString;	// 0x3102b041
- (id)absoluteURL;	// 0x31028711
- (id)baseURL;	// 0x31030e6d
- (id)copyWithZone:(NSZone *)zone;	// 0x310212f5
- (void)dealloc;	// 0x31090e0d
- (id)description;	// 0x31030df1
- (void)encodeWithCoder:(id)coder;	// 0x31090bf1
- (void)finalize;	// 0x310910d1
- (id)fragment;	// 0x31034c79
- (unsigned)hash;	// 0x31091161
- (id)host;	// 0x3100fc99
- (BOOL)isEqual:(id)equal;	// 0x31028c71
- (BOOL)isFileURL;	// 0x31012f79
- (BOOL)isKindOfClass:(Class)aClass;	// 0x31028cd1
- (BOOL)isMemberOfClass:(Class)aClass;	// 0x31090e71
- (id)parameterString;	// 0x31091a21
- (id)password;	// 0x31091949
- (id)path;	// 0x30fff49d
- (id)port;	// 0x310364ed
- (id)query;	// 0x3101856d
- (id)relativePath;	// 0x310919f1
- (id)relativeString;	// 0x31030e85
- (oneway void)release;	// 0x3100c8e5
- (id)resourceSpecifier;	// 0x31031b2d
- (id)retain;	// 0x31010005
- (unsigned)retainCount;	// 0x31090ed1
- (id)scheme;	// 0x3100ff4d
- (id)standardizedURL;	// 0x3109179d
- (id)user;	// 0x310364c1
@end

@interface NSURL (NSURLExtrasInternal)
+ (id)_URLWithData:(id)data relativeToURL:(id)url;	// 0x3109aa89
+ (id)_URLWithDataAsString:(id)dataAsString relativeToURL:(id)url;	// 0x3109a449
- (id)_URLByEscapingSpacesAndControlChars;	// 0x3109a9b5
- (id)_hostString;	// 0x3109b22d
- (id)_web_URLByRemovingLastPathComponent_nowarn;	// 0x3109a88d
- (id)_web_URLByRemovingUserAndPath_nowarn;	// 0x3109b065
- (id)_web_URLByRemovingUserAndQueryAndFragment_nowarn;	// 0x3109b10d
@end

@interface NSURL (NSURLExtras)
+ (id)_web_URLWithComponents:(XXStruct_9l2rVA)components;	// 0x3109a775
+ (id)_web_URLWithString:(id)string relativeToURL:(id)url;	// 0x3109a4fd
- (XXStruct_9l2rVA)_web_URLComponents;	// 0x3109ab4d
- (BOOL)_web_isJavaScriptURL;	// 0x3109a489
- (id)_web_scriptIfJavaScriptURL;	// 0x3109a4ad
- (id)_web_suggestedFilenameWithMIMEType:(id)mimetype;	// 0x3109a51d
@end

