//
//  ServerCapabilities.h
//  ShotgunApi
//
//  Created by Rob Blau on 6/11/11.
//  Copyright 2011 Laika. All rights reserved.
//
/// @file ServerCapabilities.h A structure for storing information about the server.

#import <Foundation/Foundation.h>

@interface ShotgunServerCapabilities : NSObject

@property (assign, readonly, nonatomic) BOOL isDev;
@property (assign, readonly, nonatomic) BOOL hasPaging;
@property (retain, readonly, nonatomic) NSArray *version;

+ (id)serverCapabilitiesWithHost:(NSString *)host andMeta:(NSDictionary *)meta;
- (id)initWithHost:(NSString *)host andMeta:(NSDictionary *)meta;

@end
