//
//  JiveFilterTagsRequestOptions.h
//  jive-ios-sdk
//
//  Created by Orson Bushnell on 11/29/12.
//
//    Copyright 2013 Jive Software Inc.
//    Licensed under the Apache License, Version 2.0 (the "License");
//    you may not use this file except in compliance with the License.
//    You may obtain a copy of the License at
//    http://www.apache.org/licenses/LICENSE-2.0
//
//    Unless required by applicable law or agreed to in writing, software
//    distributed under the License is distributed on an "AS IS" BASIS,
//    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//    See the License for the specific language governing permissions and
//    limitations under the License.
//

#import "JiveSortedRequestOptions.h"

//! \class JiveFilterTagsRequestOptions
@interface JiveFilterTagsRequestOptions : JiveSortedRequestOptions

//! one or more tags, matching any tag will select a place.
@property (nonatomic, strong) NSArray *tags;

//! Helper method to simplify adding a single tag to the tags array.
- (void)addTag:(NSString *)tag;

// Internal method referenced by derived classes.
- (NSMutableArray *)buildFilter;

@end
