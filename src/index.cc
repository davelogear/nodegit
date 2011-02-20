/*
Copyright (c) 2011, Tim Branyen @tbranyen <tim@tabdeveloper.com>
*/

#include <v8.h>
#include <node.h>
#include <node_events.h>

#include <git2.h>

#include "ref.h"
#include "repo.h"
#include "oid.h"
#include "commit.h"

using namespace node;
using namespace v8;

extern "C" void init(Handle<Object> target) {
  HandleScope scope;

  Ref::Initialize(target);
  Oid::Initialize(target);
  Repo::Initialize(target);
  Commit::Initialize(target);
}
