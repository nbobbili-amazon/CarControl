
static const char _afb_description_carcontrol[] =
    "{\"openapi\":\"3.0.0\",\"$schema\":\"http://iot.bzh/download/openapi/sch"
    "ema-3.0/default-schema.json\",\"info\":{\"description\":\"Car control\","
    "\"title\":\"Car control\",\"version\":\"0.1\",\"x-binding-c-generator\":"
    "{\"api\":\"carcontrol\",\"version\":3,\"prefix\":\"afv_\",\"postfix\":\""
    "\",\"start\":null,\"onevent\":null,\"init\":\"init\",\"scope\":\"\",\"pr"
    "ivate\":false,\"noconcurrency\":true}},\"servers\":[{\"url\":\"ws://{hos"
    "t}:{port}/api/monitor\",\"description\":\"TS caching binding\",\"variabl"
    "es\":{\"host\":{\"default\":\"localhost\"},\"port\":{\"default\":\"1234\""
    "}},\"x-afb-events\":[{\"$ref\":\"#/components/schemas/afb-event\"}]}],\""
    "components\":{\"schemas\":{\"afb-reply\":{\"$ref\":\"#/components/schema"
    "s/afb-reply-v3\"},\"afb-event\":{\"$ref\":\"#/components/schemas/afb-eve"
    "nt-v3\"},\"afb-reply-v3\":{\"title\":\"Generic response.\",\"type\":\"ob"
    "ject\",\"required\":[\"jtype\",\"request\"],\"properties\":{\"jtype\":{\""
    "type\":\"string\",\"const\":\"afb-reply\"},\"request\":{\"type\":\"objec"
    "t\",\"required\":[\"status\"],\"properties\":{\"status\":{\"type\":\"str"
    "ing\"},\"info\":{\"type\":\"string\"},\"token\":{\"type\":\"string\"},\""
    "uuid\":{\"type\":\"string\"},\"reqid\":{\"type\":\"string\"}}},\"respons"
    "e\":{\"type\":\"object\"}}},\"afb-event-v3\":{\"type\":\"object\",\"requ"
    "ired\":[\"jtype\",\"event\"],\"properties\":{\"jtype\":{\"type\":\"strin"
    "g\",\"const\":\"afb-event\"},\"event\":{\"type\":\"string\"},\"data\":{\""
    "type\":\"object\"}}}},\"responses\":{\"200\":{\"description\":\"A comple"
    "x object array response\",\"content\":{\"application/json\":{\"schema\":"
    "{\"$ref\":\"#/components/schemas/afb-reply\"}}}}}}}"
;


static const struct afb_verb_v3 _afb_verbs_carcontrol[] = {
    {
        .verb = NULL,
        .callback = NULL,
        .auth = NULL,
        .info = NULL,
        .vcbdata = NULL,
        .session = 0,
        .glob = 0
	}
};

int init(afb_api_t api);

const struct afb_binding_v3 afbBindingV3 = {
    .api = "carcontrol",
    .specification = _afb_description_carcontrol,
    .info = "Car control",
    .verbs = _afb_verbs_carcontrol,
    .preinit = NULL,
    .init = init,
    .onevent = NULL,
    .userdata = NULL,
    .provide_class = NULL,
    .require_class = NULL,
    .require_api = NULL,
    .noconcurrency = 1
};

